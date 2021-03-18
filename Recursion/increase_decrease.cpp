#include<bits/stdc++.h>
using namespace std;

void dec(int n)
{
    // Base case
    if(n==0)
    {
        return;
    }

    // Rec call
    cout<<n<<" ";
    dec(n-1);
}


void inc(int n)
{
    //Base case
    if(n==0)
    {
        return;
    }

    inc(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;

    dec(n);
    cout<<endl;
    inc(n);

    return 0;
}