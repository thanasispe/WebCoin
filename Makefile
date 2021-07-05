CC ?= g++
MAIN ?= main.cpp
FLAG ?= -Wall
TARGET ?= kyr

$(TARGET): $(MAIN)
	$(CC) $(FLAG) $(MAIN) -o $(TARGET)

clear: $(TARGET)
	rm $(TARGET)
	