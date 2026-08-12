#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> st;
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    while (!st.empty() && !q.empty())
    {
        if (st.top() != q.front())
        {
            cout << "NO" << endl;
            return 0;
        }

        st.pop();
        q.pop();
    }

    cout << "YES" << endl;

    return 0;
}