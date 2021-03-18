#include<bits/stdc++.h>
using namespace std;

int ladderJump(int n, int k)
{
    // Base case
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }

    // Rec case
    int ans=0;
    for(int i=1;i<=k;i++)
    {
        ans += ladderJump(n-i, k);
    }

    return ans;
}
int main()
{
    int n,k;
    cin>>n>>k;

    cout<< ladderJump(n,k);

    return 0;
}