#ifndef DICT_H
#define DICT_H

#include <iostream>
#include <fstream>
#include <string>

class DictionaryNode
{
    DictionaryNode *children[26];
    bool isWord;

public:
    DictionaryNode() : isWord(false)
    {
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
    }

    ~DictionaryNode()
    {
        for (int i = 0; i < 26; i++)
            delete (children[i]);
    }

    void addString(std::string input, int index);
    bool containsString(std::string input, int index);

    void dfs(std::string prevString = "") {
        if (isWord)
                std::cout << prevString << ", ";
        for (int i = 0; i < 26; i++)
            if (children[i] != nullptr)
                children[i]->dfs(prevString + (char)(i+'a'));
    }
};

class EnglishDictionary {
    DictionaryNode* root;
    int nWords = 0;

    bool isValidWord(std::string word) {
        for (int i = 0; i < (int)word.size(); i++)
            if (!(word[i] >= 'a' && word[i] <= 'z'))
                return false;
        return true;
    }

    std::string formatWord(std::string in) {
        std::string out = "";
        for (int i = 0;i < (int)in.size()-1; i++) {
            if (in[i] >= 'a' && in[i] <= 'z')
                out += in[i];
            else if (in[i] >= 'A' && in[i] <= 'Z')
                out += in[i] - 'A' + 'a';
            else return "";
        }
        return out;
    }

public:
    EnglishDictionary(std::string dir = "/usr/share/dict/words") {
        root = new DictionaryNode();
        std::string word;
        std::ifstream words(dir);
        if (words.is_open())
        {
            while (getline(words, word))
            {
                //Add word to data structure
                word = formatWord(word);
                if (word[0] == '\0') continue;
                root->addString(word, 0);
                nWords++;
            }
            words.close();
        }
        else
        {
            std::cout << "Unable to open file: " << dir << std::endl;
        }

        std::cout << "Made dictionary with " << nWords << " words" << std::endl;
    }

    bool containsWord(std::string word) {
        if (isValidWord(word))
            return root->containsString(word,0);
        else
            return false;
    }

};

#endif