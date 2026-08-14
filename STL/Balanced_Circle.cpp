#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        
        vector<long long> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long min = arr[0];
        int count = 1;

        for (int i = 1; i < n; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
                count = 1;
            }
            else if (arr[i] == min)
            {
                count++;
            }
        }

        if (count >= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}