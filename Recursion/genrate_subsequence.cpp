#include<bits/stdc++.h>
using namespace std;

void genrate_subseq(char *in, char *out, int i, int j)
{
    // Base case 
    if(in[i]=='\0')
    {
        out[j] = '\0';
        cout<<out<<endl;
        return;
    }

    // Rec call
    out[j] = in[i];
    genrate_subseq(in, out, i+1, j+1);
    genrate_subseq(in, out, i+1, j);
}



int main()
{
    char input[] = "abc";
    char output[10];

    genrate_subseq(input, output, 0, 0);
    return 0;
}