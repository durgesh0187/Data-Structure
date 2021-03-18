#include <bits/stdc++.h>
using namespace std;


// Most Optimal Solution in O(n2)
int MaxSumSumMatrix(int a[][100],int n,int m)
{
    // Coloumn wise addition
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-2;j>=0;j--)
        {
            a[i][j] += a[i][j+1];
        }
    }

    // Row wise addition
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-2;j>=0;j--)
        {
            a[j][i] += a[j+1][i]; 
        }
    }

    int result = INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            result = max(result, a[i][j]);
        }
    }
    
    cout<<result<<endl;
}

int main()
{

    int n,m;
    cin>>n>>m;
    int a[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    MaxSumSumMatrix(a,n,m);

    
    return 0;
}