#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the number of rows and columns in the matrix respectively: ";
    cin >> n;
    cin >> m;
    int array[n][m];
    cout << "Enter the elements of matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];

        }
        
    }
    int row_start = 0, row_end = n - 1, col_start = 0, col_end = m - 1;
    cout << "The spiral order of matrix elements is shown below: " << endl;
    while (row_start <= n - 1 && col_start <= m - 1)
    {
        for (int col = col_start; col <= col_end; col++)
        {
            cout << array[row_start][col]<<" ";
        }
        row_start++;
        for (int row = row_start; row <= row_end; row++)
        {
            cout << array[row][col_end]<<" ";
        }
        col_end--;
        for (int col = col_end; col >= col_start; col--)
        {
            cout << array[row_end][col]<<" ";
        }
        row_end--;
        for (int row = row_end; row >= row_start; row--)
        {
            cout << array[row_end][col_start]<<" ";
        }
        col_start++;
    }
    return 0;
}