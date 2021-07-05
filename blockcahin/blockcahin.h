#include "block.h"
#define MAXBLOCK 3500000

class Blockcahin{
    private:
        int index;
        Block chain[MAXBLOCK];

    public:
        Blockcahin();
        void newBlock(char data[80]);
};

void Blockcahin::newBlock(char data[80]){
    int index = 0;

    for (int i = 0; i<MAXBLOCK; i++){
        if (chain[i].notNull){
            index++;
        }
    }

    Block newBlock(index);
}