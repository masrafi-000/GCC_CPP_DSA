#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l;
    int t;
    cin >> t;

    while (t--)
    {
        int idx, val;
        cin >> idx >> val;

        if (idx < 0 || idx > l.size())
        {
            cout << "Invalid" << endl;
            continue;
        }

        auto it = l.begin();
        advance(it, idx);
        l.insert(it, val);

        for (int x : l)
        {
            cout << x << " ";
        }
        cout << endl;

        for (auto it = l.rbegin(); it != l.rend(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}