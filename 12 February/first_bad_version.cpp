#include <bits/stdc++.h>
using namespace std;

bool isBadVersion(int version, int bad)
{
    return version >= bad;
}

int main()
{
    int n;
    cin >> n;

    int bad;
    cin >> bad;

    int low = 1;
    int high = n;
    int ans = n;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (isBadVersion(mid, bad))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << ans << endl;

    return 0;
}
