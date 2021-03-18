#include<bits/stdc++.h>
using namespace std;


void merge(int a[], int s, int e)
{
    // First divide the array, for find mid
    int mid = (s+e)/2;

    // create a variable i = s,  j = mid+1, k = s,   k variable use for replace the value in temp array
    int i = s;
    int j = mid+1;
    int k = s;
    
    // Create temp array for mergeing two array
    int temp[100];

    while(i<=mid && j<=e)
    {
        if(a[i]<a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
        }
    }

    while(i<=mid)
    {
        temp[k++] = a[i++];
    }

    while(j<=e)
    {
        temp[k++] = a[j++];
    }

    // Now we need to copy all element from temp array to origanal array
    for(int i=s;i<=e;i++)
    {
        a[i] = temp[i];
    }
}
void mergeSort(int a[], int s, int e)
{
    // Base case
    if(s>=e)
    {
        return;
    }
    // s = start of array,  e = end of array
    // Divide the array in two parts
    int mid = (s+e)/2;

    // Recursive call first parts of array = s to mid,    secod parts array = mid+1 to e
    mergeSort(a, s, mid);
    mergeSort(a, mid+1, e);

    // Merge the two sorted array
    merge(a,s,e);
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

    mergeSort(a,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
    return 0;
}