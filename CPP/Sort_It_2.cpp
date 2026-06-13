#include <bits/stdc++.h>

using namespace std;

long long int* sort_it( int n)
{

   long long int* arr = new long long[n];

   for (int i =0; i  < n; i++)
       cin >> arr[i];

    sort(arr, arr +n, greater<int>());

   return arr;
}

int main()
{
   int n;
   cin >> n;
   
    long long int* sorted_arr = sort_it(n);

    for(int i =0; i  < n; i++)
        cout << sorted_arr[i] << " ";
    cout << endl;

    return 0;
}
