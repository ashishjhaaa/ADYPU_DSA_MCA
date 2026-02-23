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

    for (int j = 0; j < m; j++)
    {
        int colSum = 0;

        for (int i = 0; i < n; i++)
        {
            colSum += matrix[i][j];
        }

        cout << "Sum of column " << j << ": " << colSum << endl;
    }
}