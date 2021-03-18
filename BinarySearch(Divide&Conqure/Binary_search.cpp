#include<bits/stdc++.h>
using namespace std;

int binary_search(int a[], int n, int key)
{
    int s = 0;
    int e = n-1;

    while(s<=e)
    {
        int mid = (s+e)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[s]<=a[mid])
        {
            if(key >= a[s] && key<=a[mid])
            {
                e = mid-1;
            }
            else
            {
                s = mid+1;
            }
        }
        else
        {
            if(key >= a[mid] && key <= a[e])
            {
                s = mid+1;
            }
            else
            {
                e = mid-1;
            }
        }
    }

    return -1;
}

int main()
{
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<< binary_search(a,n,key)<<endl;
    return 0;
}