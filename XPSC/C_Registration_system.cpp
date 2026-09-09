#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> data;

    while (n--)
    {
        string name;
        cin >> name;

        if (data[name] == 0)
        {
            cout << "OK" << endl;
            data[name] = 1;
        }
        else
        {
            cout << name + to_string(data[name]) << endl;

            data[name]++;
        }
    }

    return 0;
}