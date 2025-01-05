#include <string>
#include <vector>
#include <iostream>
using namespace std;

// task1: find the starting index where the letter is, in the string
// task2: find the ending index where the letter is, in the string
// task3: put each word inside a vector or list

string reverseEveryWord(string &str)
{
    vector<string> words;
    int i = 0;
    int size = str.size();
    int start, end;
    while (i < size)
    {
        while (i < size && str[i] == ' ') // finding the first character
            i++;
        if (i >= size)
            break;

        start = i;

        while (i < size && str[i] != ' ') // finding the last character
            i++;

        end = i - 1;

        string foundWord = str.substr(start, end - start + 1);
        words.push_back(foundWord);
    }

    string resultantString = "";

    // Adding all the words, in the reverse order, in the resultant string
    for (int i = words.size() - 1; i >= 0; i--)
    {
        resultantString += words[i];

        // Adding spaces in between
        if (i != 0)
            resultantString.push_back(' ');
    }

    return resultantString;
}

int main()
{
    string inputString = "Ram is a good boy";

    string reversedString = reverseEveryWord(inputString);

    for(const char ch: reversedString)
        cout<<ch;

    return 0;
}