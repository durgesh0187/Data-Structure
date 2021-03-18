#include<bits/stdc++.h>
using namespace std;

void genrate_brackets(char *out, int n, int idx, int open, int close)
{
    // Base case
    if(idx==2*n)
    {
        out[idx] = '\0';
        cout<<out<<endl;
        return;
    }

    // Rec call
    if(open<n)
    {
        out[idx] = '(';
        genrate_brackets(out, n, idx+1, open+1, close);
    }

    if(close<open)
    {
        out[idx] = ')';
        genrate_brackets(out, n, idx+1, open, close+1);
    }
    return;
}


int main()
{
    int n;
    cin>>n;

    char out[1000];
    genrate_brackets(out,n , 0 , 0 ,0);

    return 0;
}