#include<bits/stdc++.h>
using namespace std;

// ex:- n = 13,    binary = 1101  so set bit is 3
// output is = 3

int countBit(int n)
{
    int ans = 0;
    while(n>0)
    {
        ans += (n&1);
        n = n>>1;
    }

    return ans;
}
int main()
{
    
    int n;
    cin>>n;
    cout<< countBit(n)<<endl;

    return 0;
}