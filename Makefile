
APP := test-smash
CFLAGS := -O2 -Wall

all: $(APP)

$(APP): $(APP).c

clean:
	rm -f $(APP)
