#include <bits/stdc++.h>
using namespace std;

void rotateImage(int a[][100], int n)
{
    
    // Reverse coloumn wise
    for (int i = 0; i < n; i++)
    {
        int start_col=0;
        int end_col=n-1;
        while (start_col<end_col)
        {
            swap(a[i][start_col], a[i][end_col]);
            start_col++;
            end_col--;
        }
    }

    // Reverse using STL
    


    // Transpose matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i<j)
            {
                swap(a[i][j],a[j][i]);
            }
        }
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

    rotateImage(a, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}