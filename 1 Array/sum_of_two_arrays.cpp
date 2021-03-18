#include <bits/stdc++.h>
using namespace std;

void print(int num)
{
    if(num==0)
    {
        return;
    }

    print(num / 10);
    cout<< num % 10;
    cout<<",";
}
int main()
{

    int n,m;
    cin >>n>>m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    
    int fnum=0;
    int snum=0;

    for(int i=0;i<n;i++)
    {
        fnum = fnum * 10 + a[i];
    }

    for(int i=0;i<m;i++)
    {
        snum = snum * 10 + b[i];
    }

    int sum = fnum+snum;
    
    print(sum);

    cout<<sum;
    cout<<endl;

    return 0;
}