#include <bits/stdc++.h>
using namespace std;


// Most Optimal Solution in O(n2)
int SumSumMatrix(int a[][100],int n,int m)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int top_left = (i+1) * (j+1);
            int buttom_right = (n-i) * (n-j);

            sum += (top_left * buttom_right * a[i][j]);
        }
    }

    cout<<sum<<endl;
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

    SumSumMatrix(a,n,m);

    // BruteFoce approach in Time Complexity O(n6)
    int sum=0;
    for(int li=0; li<n; li++)-
    {
        for(int lj=0; lj<m; lj++)
        {
            for(int bi=li+1; bi<n; bi++)
            {
                for(int bj=lj+1; bj<m; bj++)
                {
                    for(int i=li; i<=bi; i++)
                    {
                        for(int j=lj; j<=bj; j++)
                        {
                            sum += a[i][j];
                        }
                    }
                }
            }
        }
    }
    cout<<sum<<endl;


    // Better Approch in Time Complxity O(n4)
    int ans=0;
    for(int li=0;li<n-1;li++)
    {
        for(int lj=0;lj<m-1;lj++)
        {
            for(int bi=li+1;bi<n-1;bi++)
            {
                for(int bj=lj+1;bj<m-1;bj++)
                {
                    ans += a[bi][bj] - a[li-1][bj] - a[bi][lj-1] + a[li-1][lj-1];
                }
            }
        }
    }
    
    cout<<ans<<endl;
    return 0;
}