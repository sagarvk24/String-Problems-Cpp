#include <iostream>
#include <string>
using namespace std;

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.
bool isIsomorphic(string &s, string &t)
{
    if(s.size()!=t.size())
        return false;

    int sMap[256] = {0};
    int tMap[256] = {0};

    for(int i=0; i<s.length(); i++)
    {
        if(sMap[s[i]]!= tMap[t[i]]) return false;

        sMap[s[i]] = i+1;
        tMap[t[i]] = i+1;
    }

    return true;
}

int main()
{
    string s = "egg";
    string t = "add";

    bool ans = isIsomorphic(s, t);

    cout<<"Isomorphic or Not: "<<ans<<endl;

    return 0;
}
