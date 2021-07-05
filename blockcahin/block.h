#include <stdio.h>

class Block{
    public:
        Block(int index, char * data, char * prevhash);
        bool notNull = true;
    private:
        int index;
        char data[80];
        char hash[590];
        char prevhash[590];
        
};

Block::Block(int index, char indata[80], char inprevhash[590]){
    this->index = index;
    
    for (int i = 0; i<80; ++i){
        data[i] = indata[i];
    }

    for (int i = 0; i<80; ++i){
        prevhash[i] = inprevhash[i];
    }

    if (data != NULL && index != NULL){
        notNull = true;
    }
}