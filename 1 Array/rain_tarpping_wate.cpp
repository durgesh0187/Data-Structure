#include<bits/stdc++.h>
using namespace std;


// Brutefoce approach O(n2)
int maxWater(int a[],int n)
{
    int res = 0;
    for(int i=1;i<n-1;i++)
    {
        // find the max element in left side 

        int left = a[i];
        for(int j=0;j<i;j++)
        {
            left = max(left,a[j]);
        }

        // find the max element in right side
        int right = a[i];
        for(int j=i+1;j<n;j++)
        {
            right = max(right,a[j]);
        }

        res += (min(left,right)-a[i]);
    }
    return res;
}


// Most optimal solution in O(n)
int maxWater_optimized(int a[],int n)
{
    int water=0;
    int left_max=0;
    int right_max=0;

    int lo=0;
    int hi=n-1;

    while(lo<=hi)
    {
        if(a[lo] < a[hi])
        {
            if(a[lo] > left_max)
            {
                left_max = a[lo];
            }
            else
            {
                water += left_max - a[lo];
            }
            lo++;
        }
        else
        {
            if(a[hi] > right_max)
            {
                right_max = a[hi];
            }
            else
            {
                water += right_max-a[hi];
            }
            hi--;
        }
    }

    return water;
}

int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<maxWater(a,n)<<endl;
    cout<<maxWater_optimized(a,n)<<endl;
    

    return 0;
}