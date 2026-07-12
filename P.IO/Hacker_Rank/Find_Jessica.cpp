#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string name;

    bool found = false;

    while (ss >> name)
    {
        if (name == "Jessica")
        {
            found = true;
            break;
        }
    }

    found ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}
