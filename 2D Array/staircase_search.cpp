#include <bits/stdc++.h>
using namespace std;

void staircaseSearch(int a[][100], int n , int key)
{
    int  i = 0;
    int j = n-1;
    int pass = 0;
    while(i<n&&j<n)
    {
        if(a[i][j]==key){
        pass = 1;
        break;
    }
    else if(key<a[i][j]){
        j--;

    }
    else{
        i++;
    }
}

    if (pass==1)
    {
       cout<<"No. found at row = "<<i+1<<"column = "<<j+1<<endl;
    }
    else
    {
        cout<<"No. not found"<<endl;
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
    staircaseSearch(a,n,key);
    return 0;
}