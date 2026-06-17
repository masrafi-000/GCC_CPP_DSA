#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if ((x1 == x2 && y1 == y2) ||
        (x2 == x3 && y2 == y3) ||
        (x1 == x3 && y1 == y3))
    {
        cout << "NO";
        return 0;
    }

    long long ab = (x2 - x1) * (x2 - x1) +
                   (y2 - y1) * (y2 - y1);

    long long bc = (x3 - x2) * (x3 - x2) +
                   (y3 - y2) * (y3 - y2);

    long long ac = (x3 - x1) * (x3 - x1) +
                   (y3 - y1) * (y3 - y1);

    long long mx = max({ab, bc, ac});

    if (ab + bc + ac - mx == mx)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}