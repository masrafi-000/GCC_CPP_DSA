#include <iostream>
using namespace std;

void sumProduct(int arr[], int n)
{
    int sum = 0;
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
    cout << sum << endl;
    cout << product << endl;
}

void maxMin(int arr[], int n)
{
    if (n == 0) return;

    int minIndex = 0, maxIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex =i;
        }
        if (arr[i] > arr[maxIndex])
        {
            maxIndex=i;
        }        
    }
    
    swap(arr[minIndex], arr[maxIndex]);
    
}

int main()
{
    int arr[] = {1, 2, 9, 4, 5, 6, 10};
    int n = sizeof(arr) / sizeof(int);
    maxMin(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // sumProduct(arr, n);
    return 0;
}