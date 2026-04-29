CC = gcc
CFLAGS = `pkg-config --cflags gtk+-3.0`
LIBS = `pkg-config --libs gtk+-3.0`

all: linux_world_app

linux_world_app: main.c
	$(CC) -o linux_world_app main.c $(CFLAGS) $(LIBS)

clean:
	rm -f linux_world_app