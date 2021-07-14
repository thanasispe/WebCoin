
// This function counts the length of an array of characters
int strlen(char * input){
    int count = 0;

    while (input++){
        count++;
    }

    return count;
}



unsigned long hash(unsigned char *str)
{
    unsigned long hash = 5381;
    int c;

    while (c = *str++)
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return hash;
}