#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    int primarySum = 0;
    int secondarySum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];

            if (i == j)
            {
                primarySum += matrix[i][j];
            }

            if (i + j == n - 1)
            {
                secondarySum += matrix[i][j];
            }
        }
    }

    cout << "Primary Diagonal Sum: " << primarySum << endl;
    cout << "Secondary Diagonal Sum: " << secondarySum << endl;
}