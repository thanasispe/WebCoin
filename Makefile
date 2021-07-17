CC ?= g++
SOURCES ?= $(wildcard ./src/*.cpp)
FLAG ?= -Wall
TARGET ?= WebCoin
BINDIR ?= ./bin

$(TARGET): $(MAIN)
	$(CC) $(FLAG) $(SOURCES) -o $(BINDIR)/$(TARGET)

clear: $(TARGET)
	rm $(TARGET)

.PHONY: clear