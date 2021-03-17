#include <iostream>

void function1();
void function2();

int main(void) {
    
    std::cout << "Numeric: " << std::endl;
    std::cout << "\tAddition:       " << 5 + 10 << std::endl;
    std::cout << "\tSubtraction:    " << 10 - 5 << std::endl;
    std::cout << "\tMultiplication: " << 5 * 10 << std::endl;
    std::cout << "\tDivision:       " << 15.0 / 4.0 << std::endl;
    std::cout << "\tModulus:        " << 21 % 6 << std::endl;
    
    std::cout << "Boolean (0 is false, 1 is true): " << std::endl;
    std::cout << "\tEquals:        " << (1 == 1) << std::endl;
    std::cout << "\tNot Equals:    " << (1 != 1) << std::endl;
    std::cout << "\tLess than:     " << (2 < 5) << std::endl;
    std::cout << "\tGreater than:  " << (2 > 5) << std::endl;
    std::cout << "\tOR:            " << (true || false) << std::endl;
    std::cout << "\tAND:           " << (true && false) << std::endl;
    std::cout << "\tNOT:           " << (!(true && false)) << std::endl;
    std::cout << "\t(true)?():():  " << (true ? "true" : "false") << std::endl;
    std::cout << "\t(false)?():(): " << (false ? "true" : "false") << std::endl;

    int x = 10;
    std::cout << "Incrementing: (x=10)" << std::endl;
    x++;
    std::cout << "\tx++:     " << x << std::endl;
    x--;
    std::cout << "\tx--:     " << x << std::endl;
    x += 10;
    std::cout << "\tx += 10: " << x << std::endl;
    x *= 2;
    std::cout << "\tx *= 2:  " << x << std::endl;
    x %= 3;
    std::cout << "\tx %= 3:  " << x << std::endl;

    //Excercises:
    function1();
    function2();

    return 0;
}

/*
Excercise 1:
    -
*/
void function1() {
    std::cout << "Function 1: ";

    std::cout << std::endl;
}

/*
Excercise 2:
    -
*/
void function2() {
    std::cout << "Function 2: ";

    std::cout << std::endl;
}

