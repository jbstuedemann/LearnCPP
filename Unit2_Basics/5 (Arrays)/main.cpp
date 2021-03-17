#include <iostream>

void function1();
void function2();

int main(void) {
    //Define an array:
    int array [10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    //Lets see what the array looks like
    std::cout << array[0] << " is the first element of the array." << std::endl;
    std::cout << array[5] << " is the sixth element of the array." << std::endl;

    //Print out each value using a for loop
    std::cout << "Array: ";
    for (int i = 0; i < 10; i++) {
        std::cout << array[i] << ", ";
    }
    std::cout << std::endl;


    //Change the Array with a for loop
    for (int i = 0; i < 10; i++) {
        array[i] = 50*(10 - i);
    }

    //Lets see what that is
    std::cout << "Array: ";
    for (int i = 0; i < 10; i++) {
        std::cout << array[i] << ", ";
    }
    std::cout << std::endl;


    //More array's :D
    int two_dim_array [4][4] = { {1, 2, 3, 4},
                                 {5, 6, 7, 8},
                                 {9, 10, 11, 12},
                                 {13, 14, 15, 16}
                                };
    std::cout << "Print 2D-Array: " << std::endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << "(" << i << ", " << j << "): " << two_dim_array[i][j] << std::endl;
        }
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

