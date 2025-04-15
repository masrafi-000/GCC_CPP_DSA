#include <iostream>
using namespace std;

void changeArr(int arr[], int n)
{
    cout << "in function\n";
    for (int i = 0; i < n; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(int);

    changeArr(arr, n);

    cout << "in main\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}