#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;

    int val;
    while (cin >> val && val != -1)
    {
        l.push_back(val);
    }

    l.sort();
    auto it = l.begin();

    for (int x : l)
    {
        cout << x << " ";
    }

    return 0;
}