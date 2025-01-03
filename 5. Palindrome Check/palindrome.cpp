#include <string>
#include <iostream>
using namespace std;

bool isPalindromeString(const string &str)
{
    int left = 0;
    int right = str.size()-1;

    while(left < right)
    {
        if(str[left] != str[right])
            return false;
        left++;
        right--;
    }

    return true;
}

int main(){
    string inputStr;
    cout<<"Enter any string: ";
    getline(cin, inputStr);

    bool Palindrome = isPalindromeString(inputStr);

    cout<<"Palindrome or Not = "<<Palindrome<<endl;

    return 0;
}