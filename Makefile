CC = g++
CFLAGS = -Wall

all: client	server

client: client.o
	$(CC) $(CFLAGS) -o client client.o

server: server.o
	$(CC) $(CFLAGS) -o server server.o

client.o: client.cpp util.h
	$(CC) $(CFLAGS) -c client.cpp

server.o: server.cpp util.h
	$(CC) $(CFLAGS) -c server.cpp

srun: server
	./server

crun: client
	./client

runall: server client
	./server & ./client

clean:
	rm -f server client *.o
