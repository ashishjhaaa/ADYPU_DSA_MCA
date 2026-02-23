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

    for (int i = 0; i < n; i++)
    {
        int rowSum = 0;

        for (int j = 0; j < m; j++)
        {
            rowSum += matrix[i][j];
        }

        cout << "Sum of row " << i << ": " << rowSum << endl;
    }
}