#include <string>
#include <iostream>
using namespace std;

bool rotateString(string &str, string &goal)
{
    if(str.length()!=goal.length()) 
    return false;

    string stringDouble = str+str;

    return stringDouble.find(goal)!= string::npos;
}

int main()
{
    string s = "abcdef";
    string goalString = "defabc";

    bool answer = rotateString(s, goalString);

    cout<<"Can we obtain the goal string by rotating the initial string:"<<endl<<answer<<endl;

    return 0;
}