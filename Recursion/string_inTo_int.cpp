#include<bits/stdc++.h>
using namespace std;

int stringToInt(char s[], int n)
{
    // Base case 
    if(n==0)
    {
        return 0;
    }

    // Recursive case
    int digit = s[n-1] - '0';
    int small_dig = stringToInt(s, n-1);

    return small_dig * 10 + digit;
}

int main()
{
    char s[] = "1234";
    int n = strlen(s);

    cout<<stringToInt(s,n);
    return 0;
}