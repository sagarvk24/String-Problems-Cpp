#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

bool comparator(pair<int, char> p1, pair<int, char> p2)
{
    if (p1.first > p2.first)
        return true;
    if (p1.first < p2.first)
        return false;

    return p1.second < p2.second;
}

vector<char> frequencySort(const string &str)
{
    pair<int, char> freq[26];

    // Initialize frequency and character mapping
    for (int i = 0; i < 26; i++)
    {
        freq[i].first = 0;
        freq[i].second = 'a' + i;
    }

    // Count frequencies
    for (const char ch : str)
    {
        char lowerCh = tolower(ch);
        if (lowerCh >= 'a' && lowerCh <= 'z')
            freq[lowerCh - 'a'].first++;
    }

    // Sort based on frequency and character order
    sort(freq, freq + 26, comparator);

    vector<char> ans;

    // Collect sorted result
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < freq[i].first; j++)
        {
            ans.push_back(freq[i].second);
        }
    }

    return ans;
}

int main()
{
    string inputStr = "Apple";

    vector<char> freqSortedString = frequencySort(inputStr);

    for (char ch : freqSortedString)
    {
        cout << ch;
    }

    return 0;
}
