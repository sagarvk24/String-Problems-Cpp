#include <iostream>
#include <string>
using namespace std;

// For the expression containing brackets, to be balanced, 'Even Number = 2n' of brackets must be there
int countReversals(string &s)
{
    int size = s.size();

    // edge case
    if (size % 2 != 0)
        return -1;

    int open = 0, close = 0;

    for (char ch : s)
    {
        if (ch == '(')
            open++;

        else
        {
            if (open > 0)
                open--;

            else
                close++;
        }
    }

    return (open / 2) + (open % 2) + (close / 2) + (close % 2);
}

int main()
{
    string inputStr = "())()()())))((()))";
    int minimumReversalsNeeded = countReversals(inputStr);

    cout << "Minimum Reversals needed to make the input string balanced are = " << minimumReversalsNeeded;

    return 0;
}