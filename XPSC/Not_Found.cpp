#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool flag[26] = {};

    for (char c : s)
    {
        flag[c - 'a'] = true;
    }

    for (int i = 0; i < 26; i++)
    {
        if (!flag[i])
        {
            cout << char('a' + i) << endl;
            return 0;
        }
    }
    cout << "None" << endl;

    return 0;
}