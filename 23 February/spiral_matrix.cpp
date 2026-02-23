#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = m - 1;

    cout << "Spiral Order:" << endl;

    while (top <= bottom && left <= right)
    {
        // Left to Right
        for (int j = left; j <= right; j++)
        {
            cout << matrix[top][j] << " ";
        }
        top++;

        // Top to Bottom
        for (int i = top; i <= bottom; i++)
        {
            cout << matrix[i][right] << " ";
        }
        right--;

        // Right to Left
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                cout << matrix[bottom][j] << " ";
            }
            bottom--;
        }

        // Bottom to Top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }

    cout << endl;
}