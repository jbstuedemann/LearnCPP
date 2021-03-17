#include <iostream>

//ignore these 3 lines
typedef unsigned long long DATATYPE;
void function1();
void function2();

int main(void) {
    int integer = 100;
    float floating_point = 10.01;
    double double_float = 10.0000001;
    char character = 'l';
    bool boolean = true;

    std::cout << "int: " << integer << std::endl;
    std::cout << "float: " << floating_point << std::endl;
    std::cout << "double: " << double_float << std::endl;
    std::cout << "char: " << character << std::endl;
    std::cout << "bool: " << boolean << std::endl;

    //Excercises:
    function1();
    function2();

    return 0;
}

/*
Excercise 1:
    - finish the function to multiply numbers together
    - replace DATATYPE with the correct data type (it will compile, but not work properly)
*/
void function1() {
    std::cout << "Function 1: ";

    DATATYPE x = 10.0;
    DATATYPE y = 10.01;

    std::cout << (x * y) << std::endl;
}

/*
Excercise 2:
    - Try to get the function to print out 5
    - Tip: currently this will print 0, try to figure out why
*/
void function2() {
    std::cout << "Function 2: ";

    int x = 10;
    int y = 0.5;

    std::cout << (x * y) << std::endl;
}

