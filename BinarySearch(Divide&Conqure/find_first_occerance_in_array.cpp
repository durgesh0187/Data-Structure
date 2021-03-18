#include<bits/stdc++.h>
using namespace std;

int first_occer(int a[], int n)
{
    int i = 0;
    int j = n-1;

    while(i<=j)
    {
        if(a[i]==a[j])
        {
            cout<<"First occer number at index "<<i<<endl;
            i++;
            j--;
        }
        else
        {
            cour<<
        }
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

    first_occer(a,n);
    return 0;
}