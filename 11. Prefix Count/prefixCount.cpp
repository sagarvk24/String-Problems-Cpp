#include <iostream>
#include <string>
#include <vector>
using namespace std;

int prefixCount(vector<string> &words, string pref)
{
    if (words.empty())
        return 0;
    int count = 0;

    for (const string &word : words)
    {
        if (word.substr(0, pref.size()) == pref)
        {
            count += 1;
        }
    }

    return count;
}

int main()
{
    string pref = "at";
    vector<string> words = {"pay", "attention", "attend", "practice", "atmosphere"};

    int count = prefixCount(words, pref);

    cout << "The number of prefix count = " << count;

    return 0;
}