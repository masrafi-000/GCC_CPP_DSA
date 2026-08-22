#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int x = a + (a - 1);
    int y = b + (b - 1);
    int z = a + b;

    int mx = max(x, y);
    int ans = max(z, mx);

    cout << ans << endl;

    return 0;
}