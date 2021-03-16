#include <iostream>

void function1() {
    std::cout << "I am in function one." << std::endl;
}

void function2();

int main(void) {
    std::cout << "Hello World." << std::endl;
    function1();
    function2();
    return 0;
}

void function2() {
    std::cout << "I am in function two." << std::endl;
}
