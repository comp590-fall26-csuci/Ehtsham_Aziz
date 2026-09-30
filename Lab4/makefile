CC=gcc
CFLAGS = -Wall -Wextra -Iheaders
TARGET = fibonacci

all: $(TARGET)

$(TARGET): main.o fibonacci.o
	$(CC) $(CFLAGS) main.o fibonacci.o -o $(TARGET)
	
main.o: main.c headers/fibonacci.h
	$(CC) $(CFLAGS) -c main.c

fibonacci.o: fibonacci.c headers/fibonacci.h
	$(CC) $(CFLAGS) -c fibonacci.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o $(TARGET)
