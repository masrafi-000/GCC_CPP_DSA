#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long odd = arr[0], even = arr[1];

    for (int i = 2; i < n; i += 2)
    {
        odd = max(odd, arr[i]);
    }

    for (int i = 3; i < n; i += 2)
    {
        even = max(even, arr[i]);
    }

    cout << odd + even << endl;

    return 0;
}