#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string b;
        cin >> b;

        set<char> st;

        for (char c : b)
        {
            st.insert(c);
        }

        string r;

        for (char c : st)
        {
            r += c;
        }

        for (char &c : b)
        {
            for (int i = 0; i < r.size(); i++)
            {
                if (c == r[i])
                {
                    c = r[r.size() - 1 - i];
                    break;
                }
            }
        }

        cout << b << endl;
    }

    return 0;
}