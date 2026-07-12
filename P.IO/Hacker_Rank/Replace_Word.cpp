#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, x;
        cin >> s >> x;

        int pos = s.find(x);

        for (int i = 0; i < s.size(); i++)
        {
            if (i == pos)
            {
                s.replace(pos, x.size(), "#");
                pos = s.find(x);
            }
        }

        cout << s << endl;
    }

    return 0;
}
