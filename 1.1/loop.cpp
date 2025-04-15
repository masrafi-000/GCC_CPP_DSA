#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter loop value: ";
    cin >> n;
    // int c = 0;
    // while (c <= n)
    // {
    //     cout << c << " ";
    //     c++;
    // }
    // int sum = 0;
    // for (int i = 0; i <= n; i++)
    // {
    //     sum  += i;
    //     // cout << sum << " ";

    // }
    // cout << endl;

    // cout << "sum = " << sum << endl;

    // int i = 0;
    // int even = 0;

    // while (i <= n)
    // {
    //     if (i % 2 != 0)
    //     {
    //         sum += i;
    //          cout << i << " ";
    //     }
    //     else
    //     {
    //         even += i;
    //         cout << i << " ";
    //     }
    //     i++;
    // }
    // cout << endl;
    // cout << "sum = " << sum << endl;
    // cout << "evenSum = " << even << endl;

    // bool isPrime = true;

    // for (int i = 2; i*i <= n - 1; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    // }

    // if (isPrime == true)
    // {
    //     cout << "prime number\n";
    // }
    // else
    // {
    //     cout << "non prime number\n";
    // }

    // for (int i = 1; i <= n; i++)
    // {

    //     for (int j = 1; j <= i * 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    
    cout << factorial << endl;

    return 0;
}