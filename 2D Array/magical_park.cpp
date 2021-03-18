#include <bits/stdc++.h>
using namespace std;

void magicalPark(char a[][100], int m, int n, int k, int s)
{
    bool success = true;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //Cheack
            char ch = a[i][j];
            if (s < k)
            {
                success = false;
                break;
            }
            else if (ch == '*')
            {
                s += 5;
            }
            else if (ch == '.')
            {
                s -= 2;
            }
            else
            {
                break;
            }
            // we also loss 1 point when we move right expect for the last column
            if (j != n - 1)
            {
                s--;
            }
        }
    }
    if (success)
    {
        cout << "Yes" << endl;
        cout << s << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{

    int m, n, k, s;
    cin >> m >> n >> k >> s;
    char a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    magicalPark(a,m,n,k,s);
    return 0;
}