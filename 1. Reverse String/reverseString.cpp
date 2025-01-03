#include <string>
#include <iostream>
using namespace std;

void reverseString(string &str)
{
    int size = str.size();

    int left = 0;
    int right = size-1;

    while(left < right)
    {
        swap(str[left++], str[right--]);
    }
}

int main()
{
    string newString;
    cout<<"Enter a string : ";
    getline(cin, newString);

    reverseString(newString);

    cout<<"Reversed String :";
    for(auto it:newString)
        cout<<it;

    return 0;
}