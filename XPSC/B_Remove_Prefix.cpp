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

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        set<int> st;
        int ans = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (st.count(arr[i]))
            {
                ans = i + 1;
                break;
            }

            st.insert(arr[i]);
        }

        cout << ans << endl;
    }

    return 0;
}