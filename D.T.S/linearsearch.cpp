#include <iostream>
using namespace std;

void findLowVal(int arr[], int n) {
    int minVal = arr[0] ;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }
    cout << "Lowest value: " << minVal << endl;
}

int main()
{
    int arr[] = {99, 2, 3, 4, 5, 6, 7, 8, 9};
    // int target;
    // cout << "Enter find value: ";
    // cin >> target;
    int n = sizeof(arr) / sizeof(int);

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == target)
    //     {
    //         cout << "Element found at index: " << i << endl;
    //         return i;
    //     }
    // }

    findLowVal(arr, n);

    return 0;
}