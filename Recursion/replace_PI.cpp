#include<bits/stdc++.h>
using namespace std;

void replacePI(string s)
{

    // Base case
    if(s.length()==0)
    {
        return;
    }

    // Recursive case
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replacePI(s.substr(2));
    }
    else
    {
        cout<<s[0];
        replacePI(s.substr(1));
    }
}
int main()
{
    string s;
    cin>>s;

    replacePI(s);
    return 0;
}