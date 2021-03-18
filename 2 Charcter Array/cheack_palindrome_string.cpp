#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s)
{
    int i = 0;
    int j = s.length()-1;

    while (i<j)
    {
        if(s[i]==s[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}


int main()
{
    
    string s;
    cin>>s;

    if(palindrome(s))
    {
        cout<<"String is palindrome"<<endl;
    }
    else
    {
        cout<<"String is not palindrome"<<endl;
    }
    
    return 0;
}