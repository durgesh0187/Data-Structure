#include<bits/stdc++.h>
using namespace std;

int powerN(int a,int n)
{
    if(n==0 || n==1)
    {
        return a;
    }
    return a * powerN(a,n-1);
}
int main()
{
    int a,n;
    cin>>a>>n;
    cout<< powerN(a,n)<<endl;
    return 0;
}