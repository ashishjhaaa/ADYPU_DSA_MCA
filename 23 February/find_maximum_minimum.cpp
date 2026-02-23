#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    int maximum = INT_MIN;
    int minimum = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];

            maximum = max(maximum, matrix[i][j]);
            minimum = min(minimum, matrix[i][j]);
        }
    }

    cout << "Maximum Element: " << maximum << endl;
    cout << "Minimum Element: " << minimum << endl;
}