#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, sum;
        cin >> n >> sum;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == sum)
                    {
                        flag = true;
                    }
                }
            }
        }

        flag == true ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}
