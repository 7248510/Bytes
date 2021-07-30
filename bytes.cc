#include <cstdio>
#include <string>
int main()
{
    //Learning about Bytes, Char's and Decimials I wrote an ASCII table.
    //Initially it started out with stenography but, it morphed into this 
    //ASCII to Bytes and Hex
    for(int i = 0; i <= 127; i++) {
        printf("DECIMAL VALUE: %i\n", i);
        printf("HEX VALUE: %x\n" , i);
        printf("CHAR VALUE: %c\n", i);
    }
    printf("\n\n");
    std::string TestVal = "test";
    printf("HEX VALUE:\n");
    for(char& characterPointer : TestVal) {
        printf("%x\n",characterPointer);
    }
    printf("\n\n");
    printf("DECIMAL VALUE:\n");
    for(char& characterPointer : TestVal) {
        printf("%i\n",characterPointer);
    }
    printf("\n\n");
    printf("CHAR VALUE:\n");
    for(char& characterPointer : TestVal) {
        printf("%c",characterPointer);
    }
}
