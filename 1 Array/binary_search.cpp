#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int start=0;
    int end=n-1;

    bool flag=false;
    while (start<=end)
    {
        int mid = start + (end-start)/2;

        if(a[mid]==key)
        {
            cout<<"Key present at index "<<mid<<endl;
            flag=true;
            break;
        }
        if(a[mid]>key)
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
    if(flag!=true)
    {
        cout<<"Key is not present"<<endl;
    }
    
    
    return 0;
}