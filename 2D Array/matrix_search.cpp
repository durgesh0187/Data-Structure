#include <bits/stdc++.h>
using namespace std;

void mat_search(int a[][100], int n, int key)
{
    int pass=0;
    int i=0;
    int j=n-1;

    while(i<n && j<n)
    {
        if(a[i][j]==key)
        {
            pass =1;
            break;
        }
        else if(key<a[i][j])
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    if(pass==1)
    {
        cout<<"Number found at "<<i+1<<" and "<<j+1<<endl;
    }
    else
    {
        cout<<"Number is not found"<<endl;
    }
    
}

int main()
{

    int n;
    cin >> n;
    int a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int key;
    cin>>key;
    
    mat_search(a,n,key);

    return 0;
}