#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {3,-4,5,4,-8,7,-8};
    int n = sizeof(arr) / sizeof(int);

    int maxSum = INT_MIN;

    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end <n ; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    
    cout << "max subarray sum  = " << maxSum  << endl;
    
    return 0;
}