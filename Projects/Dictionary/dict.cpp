#include "dict.h"

#include <string>

void DictionaryNode::addString(std::string input, int index)
{
    if (input.size() == index+1) {
        isWord = true;
        return;
    }

    int hash = input[index] - 'a';
    if (children[hash] == nullptr)
        children[hash] = new DictionaryNode();

    children[hash]->addString(input, index+1);
}

bool DictionaryNode::containsString(std::string input, int index)
{
    if (input.size() == index) {
        return isWord;
    }

    int hash = input[index] - 'a';
    if (children[hash] == nullptr)
    {
        return false;
    }
    else
    {
        return children[hash]->containsString(input, index+1);
    }
}