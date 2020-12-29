#include <iostream>
#include <string>
#include "func.h"
using namespace std;

int words_count(string str)
{
    int words_num = 1;
    for (int i = 0; i <= str.length(); i++)
    {
        if (str[i] == ' ')
        {
            words_num++;
        }
    }
    return words_num;
}

string* string_cutter(string str, int words_num)
{
    string* words = new string[words_num];
    int current_word = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            words[current_word] += str[i];
        }
        else
        {
            current_word++;
        }
    }
    return words;
}

void searcher(string* words, int lenght, int number)
{
    for (int i = 0; i < number; i++)
    {
        if (words[i].length() == lenght)
        {
            cout << words[i] << " ";
        }
    }
}