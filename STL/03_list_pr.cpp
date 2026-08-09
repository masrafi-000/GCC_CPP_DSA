#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;
    int val;

    while (cin >> val && val != -1)
    {
        l.push_back(val);
    }

    auto left = l.begin();
    auto right = prev(l.end());

    bool flag = true;

    while (left != right && next(left) != right)
    {
        if(*left != *right){
            flag = false;
            break;
        }
        ++left;
        --right;
    }

    if(*left != *right) flag = false;
    

    // vector<int> v(l.begin(), l.end());

    // for (int i = 0, j = v.size() - 1; i < j; i++, j--)
    // {
    //     if (v[i] != v[j])
    //     {
    //         flag = false;
    //         break;
    //     }
    // }

    cout << (flag ? "YES" : "NO");

    return 0;
}