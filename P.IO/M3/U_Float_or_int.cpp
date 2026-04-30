#include <iostream>  
using namespace std;

int main()
{
    double n;
    cin >> n;

    int x = n;

    if (x == n)
        cout << "int " << x << endl;
    else
        cout << "float " << x << " " << n - x << endl;
    

    return 0;
}