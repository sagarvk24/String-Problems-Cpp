#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

bool validAnagram(string &str1, string &str2)
{
    if (str1.length() != str2.length())
        return false;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if (str1 == str2)
        return true;

    return false;
}

int main()
{
    string s1 = "anagram";
    string s2 = "nagaram";

    bool answer = validAnagram(s1, s2);

    cout << "Valid Anagram or not: " << endl
         << answer << endl;

    return 0;
}