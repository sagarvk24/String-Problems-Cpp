#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    if (strs.empty())
        return " ";

    int size = strs.size();

    sort(strs.begin(), strs.end());

    string first = strs[0];
    string last = strs[size - 1];

    string answer = " ";
    for (int i = 0; i < min(first.size(), last.size()); i++)
    {
        if(first[i]!=last[i])   break;
        answer+=first[i];
    }

    return answer;
}

int main(){

    vector<string> stringArray = {"flower", "flight", "flow", "float"};

    string result = longestCommonPrefix(stringArray);

    cout<<"Longest Common Prefix in the given string array is: "<<result<<endl;

    return 0;
}