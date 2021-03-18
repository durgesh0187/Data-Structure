#include <bits/stdc++.h>
using namespace std;

void spiralPrint(int a[][1000], int m, int n)
{
    
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    
    // Spiral print logic
    int startCol = 0;
    int startRow = 0;
    int endCol = n - 1;
    int endRow = m - 1;

    while (startCol <= endCol && startRow <= endRow)
    {
        // First row
        for (int i = startCol; i <= endCol; i++)
        {
            cout << a[startRow][i] << " ";
        }
        startRow++;


        for (int i = startRow; i <= endRow; i++)
        {
            cout << a[i][endCol] << " ";
        }
        endCol--;
        

        // Buttom Row
        if (endRow > startRow)
        {

            for (int i = endCol; i >= startCol; i--)
            {
                cout << a[endRow][i] << " ";
            }
            endRow--;
        }

        if (endCol > startCol)
        {
            for (int i = endRow; i >= startRow; i--)
            {
                cout << a[i][startCol] << " ";
            }
            startCol++;
        }
    }



    return 0;
}