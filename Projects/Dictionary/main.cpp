#include <iostream>
#include <fstream>
#include <string>

#include "dict.h"

int main(int argc, char* argv[])
{
    EnglishDictionary* dict;

    if (argc > 0)
        dict = new EnglishDictionary(argv[0]);
    else
        dict = new EnglishDictionary();

    while (true)
    {
        std::string test;
        std::cout << "Enter word: ";
        std::cin >> test;
        std::string out = dict->containsWord(test) ? "true" : "false";
        std::cout << out << std::endl;
    }
}