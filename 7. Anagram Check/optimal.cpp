#include <string>
#include <iostream>
#include <vector>
using namespace std;

bool isAnagram(string &s, string &t)
{
    // int freqS[26] = {0};
    // int freqT[26] = {0};

    // if (s.length() != t.length())
    //     return false;

    // int n = s.length();

    // for (int i = 0; i < n; i++)
    // {
    //     freqS[s[i] - 'a']++;
    //     freqT[t[i] - 'a']++;
    // }

    // for (int i = 0; i < 25; i++)
    // {
    //     if (freqS[i] != freqT[i])
    //         return false;
    // }

    // return true;

    if (s.length() != t.length())
        return false;

    // vector to store the count of each character
    vector<int> count(26, 0);

    // count the occurence of each character in the first string
    for (char c : s)
        count[c - 'a']++;

    // decrement the count of each character in the second string
    for (char c : t)
        count[c - 'a']--;

    // check for count of every character
    for (int i : count)
    {
        if (i != 0)
            return false;
    }
    return true;
}

int main()
{
    string s1 = "anagram";
    string s2 = "nagaram";

    bool answer = isAnagram(s1, s2);

    cout << "Valid Anagram or not: " << endl
         << answer << endl;

    return 0;
}
