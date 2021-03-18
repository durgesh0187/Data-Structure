#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;

    if(n&1)
    {
        cout<<"Odd"<<endl;
    }
    else if(n&1^1)
    {
        cout<<"Even"<<endl;
    }

    return 0;
}