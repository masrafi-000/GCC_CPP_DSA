#include <iostream>
using namespace std;

void fib(int n)
{
    long long a = 0, b = 1, c;
    cout << a << " " << b << " ";
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter value: ";
    cin >> n;
    fib(n);

    return 0;
}