CC ?= g++
MAIN ?= main.cpp  
FLAG ?= -Wall
TARGET ?= WebCoin

$(TARGET): $(MAIN)
	$(CC) $(FLAG) $(MAIN) -o $(TARGET)

clear: $(TARGET)
	rm $(TARGET)
	