#include<bits/stdc++.h>
using namespace std;

char word[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void printSpellings(int n)
{
    // Base case
    if(n==0)
    {
        return;
    }

    // Recursive case
    printSpellings(n / 10);
    int digit = n % 10;
    cout<< word[digit]<<" ";

    return; 
}
int main()
{
    int n;
    cin>>n;
    
    printSpellings(n);
    return 0;
}