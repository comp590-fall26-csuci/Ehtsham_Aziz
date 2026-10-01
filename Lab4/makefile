CC = gcc
CFLAGS = -Wall -Wextra -Iheaders

TARGET = fibonacci
TEST_TARGET = test_fibonacci

all: $(TARGET)

$(TARGET): main.o fibonacci.o
	$(CC) $(CFLAGS) main.o fibonacci.o -o $(TARGET) -lm

main.o: main.c headers/fibonacci.h
	$(CC) $(CFLAGS) -c main.c

fibonacci.o: fibonacci.c headers/fibonacci.h
	$(CC) $(CFLAGS) -c fibonacci.c

$(TEST_TARGET): test_fibonacci.c fibonacci.c headers/fibonacci.h headers/utest.h
	$(CC) $(CFLAGS) test_fibonacci.c fibonacci.c -o $(TEST_TARGET) -lm

test: $(TEST_TARGET)
	./$(TEST_TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o $(TARGET) $(TEST_TARGET)