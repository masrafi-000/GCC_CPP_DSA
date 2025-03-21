#include <iostream>
using namespace std;

int main()
{

    // int arr[] = {12, 43, 44, 34, 1, 5, -10};
    // int smallest = INT16_MAX;
    // int largerst = INT16_MIN;

    // for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    // {
    //     smallest = min(arr[i], smallest);
    //     largerst = max(arr[i], largerst);
    // }

    // cout << largerst << endl;

    // cout << smallest << endl;

    int arr[] = {12, 43, 44, 34, 1, 5, 10};
    int n = sizeof(arr) / sizeof(int);

    int smallest = arr[0], largest = arr[0];
    int smallIndex = 0, largestIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            smallIndex = i;
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
            largestIndex = i;
        }
    }

    cout << "Largest value: " << largest << " at index: " << largestIndex << endl;
    cout << "Smallest value: " << smallest << " at index: " << smallIndex << endl;
    return 0;
}