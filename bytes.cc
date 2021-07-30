#include <cstdio>
#include <string>
#include <iostream>

void table() {
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
        printf("%c\n",characterPointer);
    }
}

void decimalEncode()
{
    static std::string decimalVal;
    puts("Please enter a word you'd like converted into decimal");
    std::getline(std::cin,decimalVal);
    std::cout <<"You've entered: "<< decimalVal << std::endl;
    printf("Decimal value:\n");
    for(char& characterPointer : decimalVal) {
        printf("%i ",characterPointer);
    }
}


void hexEncode()
{
    static std::string hexVal;
    puts("Please enter a word you'd like converted into hex");
    std::getline(std::cin,hexVal);
    std::cout <<"You've entered: "<< hexVal << std::endl;
    printf("Hex Value:\n");
    for(char& characterPointer : hexVal) {
        printf("%x ",characterPointer);
    }
    std::cout << std::endl;
}


int main(void)
{
    table();
    hexEncode();
    decimalEncode();
    return EXIT_SUCCESS;
}
