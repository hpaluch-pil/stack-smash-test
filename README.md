# Stack smash test program

Intentionally buggy program to test if environment will catch stack overflow.

You simply run it with one argument:
- if argument length is < 5 bytes, no overflow occurs
- if argument has 5 or more bytes, stack overflow will occur

Example when stack is not overflowed:

```shell
$ ./test-smash 1234

Buf: '1234'
```

Example of stack overflow - if you have hardened Linux distribution - it should be detected:

```shell
$ ./test-smash abcde

*** buffer overflow detected ***: terminated
Aborted
```

You may also try various modification of `CFLAGS` in `Makefile`:
- `-fstack-protector-strong` to explicitly enable "Stack canary" protection
- `-O2 -D_FORTIFY_SOURCE=2` to explicitly enable "Fortified source" protection

Please read these resources for details:
- https://developers.redhat.com/articles/2022/06/02/use-compiler-flags-stack-protection-gcc-and-clang
- https://www.redhat.com/en/blog/security-technologies-fortifysource
- https://wiki.gentoo.org/wiki/Hardened/FAQ

