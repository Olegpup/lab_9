#include "func.h"

int main()
{
    string a;
    int lenght;
    cout << "Enter your string: ";
    getline(cin, a);
    cout << "Enter your lenght: ";
    cin >> lenght;
    cout << "Your words: ";
    searcher(string_cutter(a, words_count(a)), lenght, words_count(a));

    return 0;
}
