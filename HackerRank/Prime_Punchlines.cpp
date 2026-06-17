#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<long long>arr(n);
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }

    set<long long> primes;

    for(int i =0; i<n; i++){
        long long x = arr[i];

        for(long long j = 2; j*j <= x; j++) {
            if(x%j == 0) {
                primes.insert(j);

                while(x%j ==0){
                    x /=j;
                }
            }
        }

        if(x> 1) {
            primes.insert(x);
        }
    }


    cout << primes.size() << endl;

    return 0;
}