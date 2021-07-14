class Block{
    public:
        Block(int index, char * data, char * prevhash);
        bool notNull = true;
        char * getHash();
    private:
        int index;
        char data[80];
        char hash[590];
        char prevhash[590];
        
};