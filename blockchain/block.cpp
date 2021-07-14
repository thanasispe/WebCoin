#include <stdio.h>

#include "block.h"

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

char * Block::getHash(){
    return hash;
}