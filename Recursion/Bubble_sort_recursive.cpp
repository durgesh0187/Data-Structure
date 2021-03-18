#include<bits/stdc++.h>
using namespace std;


void bubble_sort(int a[], int n)
{
    //Base case
    if(n==1)
    {
        return;
    }

    // Recursive call
    for(int j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            swap(a[j],a[j+1]);
        }
    }
    bubble_sort(a,n-1);
}


// Pure recursive

void bubble_sort_res(int a[], int j, int n)
{
    // Base case
    if(n==1)
    {
        return;
    }

    if(j==n-1)
    {
        return bubble_sort_res(a,0,n-1);
    }

    // Rec case
    if(a[j]>a[j+1])
    {
        swap(a[j],a[j+1]);
    }

    bubble_sort_res(a,j+1,n);

    return;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }

    bubble_sort(a,n);
    bubble_sort_res(a,0,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}