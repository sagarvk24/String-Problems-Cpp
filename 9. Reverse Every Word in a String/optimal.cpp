#include <string>
#include <iostream>
#include <vector>
using namespace std;

// task1: finding the first character != ' '
// task2: move to the left
// task3: Reverse the word
// task4: after the word, add a space. Then repeat the process

void stringReverse(string &str, int start, int end)
{
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
string reverseEveryWord(string &str)
{
    int size = str.size();
    // reverse the string first
    stringReverse(str, 0, size - 1);

    int i = 0, j = 0;
    int start, end;

    while (j < size)
    {
        // skip the white spaces
        while (j < size && str[j] == ' ')
            j++;

        start = i;
        while (j < size && str[j] != ' ')
        {
            // move the letters to the left
            str[i] = str[j];
            i++;
            j++;
        }
        end = i - 1;

        stringReverse(str, start, end);

        str[i] = ' ';
        i++;
    }

    string answer = str.substr(0, end + 1);
    return answer;
}

int main()
{
    string inputString = "Krishna is the lord of universe";

    string reversedString = reverseEveryWord(inputString);

    for (const char ch : reversedString)
        cout << ch;

    return 0;
}