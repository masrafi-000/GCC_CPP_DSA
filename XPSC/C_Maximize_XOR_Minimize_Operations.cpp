#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;
    string out;
    out.reserve(t * 12);

    while (t--)
    {
        ll x, y;
        cin >> x >> y;

        ll s = x + y;

        ll a = 0;

        bool flag = true;

        for (int i = 31; i >= 0; i--)
        {
            ll s_bit = (s >> i) & 1LL;
            ll x_bit = (x >> i) & 1LL;

            if (flag)
            {
                if (s_bit == 1)
                {
                    if (x_bit == 1)
                    {
                        a |= (1LL << i);
                    }
                }
                else
                {
                    if (x_bit == 1)
                    {
                        flag = false;
                    }
                }
            }
            else
            {
                if (s_bit == 1)
                {
                    a |= (1LL << i);
                }
            }
        }

        ll k = x - a;
        out += to_string(s);
        out += ' ';
        out += to_string(k);
        out += '\n';
    }

    cout << out;
    return 0;
}