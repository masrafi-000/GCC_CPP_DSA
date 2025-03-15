#include <iostream>
using namespace std;

int main()
{
    int n, i = 0, sum = 0;
    cout << "Input the value: ";
    cin >> n;

    do
    {
        cout << i << " ";
        sum += i;
        i++;
    } while (i <= n);

    cout << "\nSum: " << sum << endl;
    return 0;
}