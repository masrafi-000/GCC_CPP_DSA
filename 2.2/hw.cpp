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
    if (n == 0)
        return;

    int minIndex = 0, maxIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }

    swap(arr[minIndex], arr[maxIndex]);
}

void uniqueElement(int arr[], int n, int m)

{
    cout << "{ ";

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }
    cout << "}" << endl;
}

void intersection(int arr1[], int arr2[], int n, int m)
{
    int res[100], resIndex = 0;
    for (int i = 0; i < n; i++)
    {
        bool isDuplicate = false;
        for (int j = 0; j < resIndex; j++)
        {
            if (res[j] == arr1[i])
            {
                isDuplicate = true;
                break;
            }
        }
        if (isDuplicate)
            continue;

        for (int k = 0; k < m; k++)
        {
            if (arr1[i] == arr2[k])
            {
                res[resIndex++] = arr1[i];
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}

int main()
{
    int arr1[] = {1, 2, 9, 7, 10, 15};
    int arr2[] = {1, 2, 7, 9, 4, 5, 6, 10};
    int n = sizeof(arr1) / sizeof(int);
    int m = sizeof(arr2) / sizeof(int);

    // maxMin(arr, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // uniqueElement(arr, n);

    intersection(arr1, arr2, n, m);

    // sumProduct(arr, n);
    return 0;
}