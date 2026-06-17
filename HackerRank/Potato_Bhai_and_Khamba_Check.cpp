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

        vector<long long> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= k)
            {
                count++;
            }
        }

        count % 2 == 0 ? cout << "HAPPY" << endl : cout << "SAD" << endl;
    }

    return 0;
}