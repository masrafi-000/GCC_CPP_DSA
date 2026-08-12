#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> v(n);

        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        long long target = 2 * k - sum;

        sort(v.begin(), v.end());

        long long ans = 0;

        int left = 0; 
        int right = n -1;

        while(left < right) {
            if(v[left] + v[right] > target) {
                ans += right - left;
                right--;
            } else {
                left++;
            }
        }
        cout << ans << endl;


    }

    return 0;
}