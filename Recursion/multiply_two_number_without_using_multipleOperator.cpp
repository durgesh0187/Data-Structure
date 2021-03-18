#include<bits/stdc++.h>
using namespace std;

int multi(int a,int b)
{
    if(b==0)
    {
        return 0;
    }
    return a + multi(a,b-1);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<< multi(a,b)<<endl;
    return 0;
}