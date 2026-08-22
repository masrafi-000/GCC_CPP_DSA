#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s = to_string(n);

    for (int i = s.length(); i < 4; i++)
    {
        s = "0" + s;
    }

    cout << s << endl;

    return 0;
}