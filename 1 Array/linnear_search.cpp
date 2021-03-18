#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }


    
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            cout<<key<<" is found at "<<i<<" index"<<endl;
            break;
        }
    }
    if(i==n)
    {
        cout<<"key is not present"<<endl;
    }

    
    return 0;
}