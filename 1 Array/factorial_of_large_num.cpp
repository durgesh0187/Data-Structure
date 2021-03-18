#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==1 || n==0)
    {
        return 0;
    }

    int res=0;
    for(int i=0;i<n;i++)
    {
        res += i; 
    }

    return floor(res);
}
int main()
{
    int n;
    cin>>n;

    cout<< fact(n)<<endl;
    return 0;
}