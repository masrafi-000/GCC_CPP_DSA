#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    map<string, string> original;
    map<string, string> current;

    while (t--)
    {
        string old_handle, new_handle;
        cin >> old_handle >> new_handle;

        if (original.find(old_handle) == original.end())
        {
            original[new_handle] = old_handle;
        }
        else
        {
            string root = original[old_handle];
            original.erase(old_handle);
            original[new_handle] = root;
        }
    }

    cout << original.size() << endl;

    for (auto &[new_handle, old_handle] : original)
    {
        cout << old_handle << ' ' << new_handle << endl;
    }

    return 0;
}