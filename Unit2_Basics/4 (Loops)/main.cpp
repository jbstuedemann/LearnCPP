#include <iostream>

void function1();
void function2();

int main(void) {
    int x;

    //Basic While Loop
    x = 0;
    while (x < 10) {
        x++;
    }
    std::cout << "x = " << x << std::endl;


    //Lets see how this runs:
    x = 0;
    while (x < 10) {
        std::cout << "x = " << x << std::endl;
        x++;
    }
    std::cout << "x = " << x << std::endl;


    //Break statements:
    x = 0;
    while(true) {
        if (x < 10) {
            break;
        }
        x++;
    }


    //Continue statements:
    x = 0;
    while(x <= 10) {
        if (x % 2 == 0) {
            std::cout << x << " is even." << std::endl;
            x += 2;
            continue;
        }
        std::cout << "This should never run" << std::endl;
    }


    //For loop
    for (int i = 0; i < 10; i++) {
        std::cout << i << std::endl;
    }

    //More For loop
    for (int i = 9; i >= 0; i--) {
        std::cout << i << std::endl;
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

