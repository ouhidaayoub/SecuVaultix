CC = gcc
CFLAGS = -Iinclude
SRC = $(wildcard source/**/*.c)
TARGET = main

$(TARGET): $(SRC)
	$(CC) $(SRC) $(CFLAGS) -o $(TARGET)

clean:
	del $(TARGET).exe