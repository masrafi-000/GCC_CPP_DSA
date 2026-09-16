#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if (k <= n)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 2 * (k - n) << endl;
        }
    }

    return 0;
}