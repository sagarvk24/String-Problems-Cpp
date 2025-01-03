#include <iostream>
#include <string>
#include <vector>
using namespace std;

string largestOddNumber(string &s)
{
    int lastOddIndex = -1;
    int size = s.size();

    for (int i = size - 1; i >= 0; i--)
    {
        // finding the odd number index in the string
        if ((s[i] - '0') % 2 == 1)
        {
            lastOddIndex = i;
            break;
        }
    }
    if (lastOddIndex == -1)
        return "";

    // finding the first non-zero character int the string
    int firstNonZero = 0;
    while (firstNonZero < lastOddIndex && s[firstNonZero] == '0')
    {
        firstNonZero += 1;
    }

    return s.substr(firstNonZero, lastOddIndex - firstNonZero + 1);
}

int main()
{
    string inputStr;
    cout << "Enter any string: ";
    getline(cin, inputStr);

    string largestOddString = largestOddNumber(inputStr);

    cout << "Largest Odd Number inside: " << inputStr << " is:: " << endl;
    for (char ch : largestOddString)
    {
        cout << ch;
    }
    return 0;
}
