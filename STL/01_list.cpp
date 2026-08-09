#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l1, l2;
    int val;

    while (cin >> val && val != -1)
    {
        l1.push_back(val);
    }

    while (cin >> val && val != -1)
    {
        l2.push_back(val);
    }

    if (l1.size() != l2.size())
    {
        cout << "NO";
        return 0;
    }

    auto it1 = l1.begin();
    auto it2 = l2.begin();

    while (it1 != l1.end())
    {
        if (*it1 != *it2)
        {
            cout << "NO";
            return 0;
        }
        ++it1;
        ++it2;
    }

    cout << "YES";

    return 0;
}