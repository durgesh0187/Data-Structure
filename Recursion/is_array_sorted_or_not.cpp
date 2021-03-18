#include<bits/stdc++.h>
using namespace std;

bool isSorted(int a[], int n)
{
    // Base case
    if(n==1 or n==0)
    {
        return true;
    }

    // Rec call

    if(a[0] < a[1] and isSorted(a+1,n-1))
    {
        return true;
    }
    else
    {
        return false;
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

    cout<< isSorted(a,n)<<endl;

    return 0;
}