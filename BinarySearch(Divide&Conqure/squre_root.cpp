#include<bits/stdc++.h>
using namespace std;

float squre_root(int n, int p)
{
    int s = 0;
    int e = n;
    float ans = -1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(mid*mid==n)
        {
            return mid;
        }
        else if(mid*mid<n)
        {
            ans = mid;
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
    }


    //Floating part 
    // bruteforce

    float inc = 0.1;
    for(int time=1;time<=p;time++)
    {
        while(ans*ans <= n)
        {
            ans = ans + inc;
        }
        ans = ans - inc;
        inc = inc / 10;
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;
    
    cout<<squre_root(n,3)<<endl;

    return 0;
}