#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        int zero_count = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] == 0) {
                zero_count++;
            }
        }

   
        if (zero_count == 0) {
            cout << "YES\n";

            string ans(n, 'A');

            cout << ans << '\n';
        }


        else if (zero_count == 1) {
            cout << "NO\n";
        }

        else {
            cout << "YES\n";

            string ans(n, 'C');

            bool first_zero = true;

            for (int i = 0; i < n; i++) {
                if (a[i] == 0) {

                    if (first_zero) {
                        ans[i] = 'A';
                        first_zero = false;
                    }
                    else {
                        ans[i] = 'B';
                    }
                }
            }

            cout << ans << '\n';
        }
    }

    return 0;
}