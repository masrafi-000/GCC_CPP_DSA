#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    long long sum = 0;
    long long odd = LLONG_MAX;
    
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (v[i] % 2 == 1)
        {
            odd = min(odd, v[i]);
        }
    }

    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum - odd << endl;
    }

    return 0;
}