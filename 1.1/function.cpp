#include <iostream>
using namespace std;

// int factorial(int n)
// {
//     int fact = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }

// int nCr(int n, int r)
// {
//     int fact_n = factorial(n);
//     int fact_r = factorial(r);
//     int fact_n_r = factorial(n - r);
//     return fact_n / (fact_r * fact_n_r);
// }

// int prime(int n) {
//     for (int i = 2; i < n; i++) {
//         if (n % i == 0) {
//             cout << "Not Prime" << endl;
//             return n;
//         } else{
//             cout << "Prime" << endl;
//         }
//     }
//     return n;
// }

void findPrimes(int n)
{
    bool isPrime[n + 1];
    for (int i = 0; i <= n; i++)
    {
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    cout << "Prime numbers from 2 to " << n << " are: ";
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;
    findPrimes(n);
    // cout << prime(n) << endl;
    // int n = 4, r = 2;
    // cout << nCr(n, r) << endl;
    return 0;
}