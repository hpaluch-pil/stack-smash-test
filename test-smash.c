#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(int argc, char **argv)
{
   char wrong_buf[5];

   if (argc != 2){
   	fprintf(stderr,"Invalid usage: %s param\n",argv[0]);
	return EXIT_FAILURE;
   }
   // danger!
   strcpy(wrong_buf,argv[1]);
   printf("Buf: '%s'\n",wrong_buf);
   return EXIT_SUCCESS;
}

