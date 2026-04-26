#include <iostream>
using namespace std;

int main(){
    double a;
    cin >> a;
    double area = 3.141592653 * a * a;
    cout.precision(9);
    cout << fixed << area << "\n";

    return 0;
}