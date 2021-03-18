#include<bits/stdc++.h>
using namespace std;

void filterchar(int n, string s)
{
    int j=0;
    while(n>0)
    {
        int last_bit = (n&1);
        if(last_bit==1)
        {
            cout<<s[j];
        }
        j++;
        n = n>>1;
    }
    cout<<endl;
}

void printChar(string s)
{
    int n = s.length();
    for(int i=0;i<(1<<n);i++)
    {
        filterchar(i,s);
    }
    return;
}
int main()
{
    
    string s;
    cin>>s;

    printChar(s);

    return 0;
}