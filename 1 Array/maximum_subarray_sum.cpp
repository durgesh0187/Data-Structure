#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    

    // Brutefoce approach in O(n3)
    int currsum=0;
    int maxsum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            currsum = 0;
            for(int k=i;k<=j;k++)
            {
                currsum+=a[k];
            }
            if(currsum>maxsum)
            {
                maxsum = currsum;
            }
        }
    }
    cout<<"Maximum sum is "<<maxsum<<endl;


    // kaden's algorithm in O(n)
    int currentSum=0;
    int maximumSum=0;
    for(int i=0;i<n;i++)
    {
        currentSum+=a[i];
        if(currentSum<0)
        {
            currentSum = 0;
        }
        maximumSum = max(maximumSum,currentSum);
    }
    cout<<"Maximum sum is "<<maximumSum<<endl;

    
    return 0;
}