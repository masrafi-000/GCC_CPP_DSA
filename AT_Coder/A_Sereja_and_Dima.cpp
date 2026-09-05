#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int left = 0, right = n - 1;

    int sereja = 0, dima = 0;

    bool sturn = true;

    while (left <= right)
    {
        int card;
        if (arr[left] > arr[right])
        {
            card = arr[left];
            left++;
        } else {
            card = arr[right];
            right --;
        }

        if(sturn) {
            sereja += card;
        } else {
            dima += card;
        }

        sturn = !sturn;
    }

    cout << sereja << " " << dima << endl;

    return 0;
}