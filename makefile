CC = g++
CFLAGS = -Wall -std=c++11
OBJS = sort.o task.o

all: program

program: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o program

sort.o: sort.cc
	$(CC) $(CFLAGS) -c sort.cc

task.o: task.cc task.h
	$(CC) $(CFLAGS) -c task.cc

clean:
	rm -f *~ *.o program
