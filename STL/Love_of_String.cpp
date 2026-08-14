#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    string ans = s;

    for (int i = 0; i <= n - k; i++)
    {
        string temp = s;
        
        sort(temp.begin() + i, temp.begin() + i + k);

        if (temp < ans)
            ans = temp;
    }

    cout << ans << endl;

    return 0;
}