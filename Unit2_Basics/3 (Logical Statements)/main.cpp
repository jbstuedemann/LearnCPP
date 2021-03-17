#include <iostream>

void function1();
void function2();

int main(void) {
    //Lets see some: if..., else if..., else...
    int x = 10;

    if (x < 10)
    {
        std::cout << "x is < 10" << std::endl;
    }
    else if (x > 10)
    {
        std::cout << "x is > 10" << std::endl;
    }
    else
    {
        std::cout << "x is == 10" << std::endl;
    }

    //Let's change x and try that again...
    x = 20;

    if (x < 10)
    {
        std::cout << "x is < 10" << std::endl;
    }
    else if (x > 10)
    {
        std::cout << "x is > 10" << std::endl;
    }
    else
    {
        std::cout << "x is == 10" << std::endl;
    }

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

