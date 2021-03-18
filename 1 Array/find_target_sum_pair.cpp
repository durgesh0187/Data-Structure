#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    // BruteFoce Approach in O(n2)
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(a[i]+a[j]==k)
    //         {
    //             cout<<a[i]<<" and "<<a[j]<<" = "<<k<<endl;
    //         }
    //     }
    // }



    // Optimal solution in o(N) using two pointer approach
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(a[i]+a[j]==k)
        {
            cout<<a[i]<<" and "<<a[j]<<" = "<<k<<endl;
            i++;
            j--;
        }
        else if(a[i]+a[j]<k)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    return 0;
}