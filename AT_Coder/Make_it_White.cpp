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

        vector<char> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int first = -1;
        int last = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'B')
            {
                if (first == -1)
                    first = i;
                last = i;
            }
        }
        cout << (last - first + 1) << endl;
    }

    return 0;
}