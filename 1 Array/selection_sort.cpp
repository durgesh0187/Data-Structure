#include<bits/stdc++.h>
using namespace std;

void selection(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int mi_index=i;
        for(int j=i;j<=n-1;j++)
        {
            if(a[j]<a[mi_index])
            {
                mi_index = j;
            }
        }
        swap(a[i],a[mi_index]);
    }
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
    
    selection(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}