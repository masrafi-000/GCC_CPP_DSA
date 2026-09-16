#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    map<string, string> mp;

    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;

        mp[ip] = name;
    }

    for (int i = 0; i < m; i++)
    {
        string cmd, ip;

        cin >> cmd >> ip;

        ip.pop_back();

        cout << cmd << " " << ip << "; #" << mp[ip] << endl;
    }

    return 0;
}