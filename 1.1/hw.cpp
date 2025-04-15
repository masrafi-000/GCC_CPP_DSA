#include <iostream>
using namespace std;

// bool pwNum(int n)
// {
//     if (n <= 0)
//         return false;

//     while (n % 2 != 0)
//     {
//         return false;
//         n /= 2;
//     }
//     return true;
// }

int main()
{
    int n;
    cout << "Enter value: ";
    cin >> n;

    cout << pwNum(n) << endl;

    return 0;
}