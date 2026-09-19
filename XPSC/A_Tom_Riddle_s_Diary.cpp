#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set<string> names;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (names.count(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            names.insert(s);
        }
    }

    return 0;
}