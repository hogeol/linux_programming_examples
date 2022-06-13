CC=g++
CFLAGS=-g -Wall
OBJS=gugu.o
TARGET=gugu

$(TARGET): $(OBJS)
		$(CC) -o $@ $(OBJS)
clean:
	rm -f *.o
	rm -f $(TARGET)
							

$(OBJS): gugu.cpp
