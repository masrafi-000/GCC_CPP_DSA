#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        vector<char> ans;
        vector<int> lower, upper;

        for (char c : s)
        {
            if (c == 'b')
            {
                if (!lower.empty())
                {
                    ans[lower.back()] = '#';

                    lower.pop_back();
                }
            }
            else if (c == 'B')
            {
                if (!upper.empty())
                {
                    ans[upper.back()] = '#';
                    upper.pop_back();
                }
            }
            else
            {
                int idx = ans.size();

                ans.push_back(c);

                if (islower(c))
                    lower.push_back(idx);
                else
                    upper.push_back(idx);
            }
        }

        for (char c : ans)
        {
            if (c != '#')
            {
                cout << c;
            }
        }
        cout << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         string s;
//         cin >> s;

//         list<char> ans;

//         for (char c : s)
//         {
//             if (c == 'b')
//             {
//                 auto it = ans.end();

//                 while (it != ans.begin())
//                 {
//                     --it;

//                     if (islower(*it))
//                     {
//                         ans.erase(it);
//                         break;
//                     }
//                 }
//             }

//             else if (c == 'B')
//             {
//                 auto it = ans.end();

//                 while (it != ans.begin())
//                 {
//                     --it;

//                     if (isupper(*it))
//                     {
//                         ans.erase(it);
//                         break;
//                     }
//                 }
//             }
//             else
//             {
//                 ans.push_back(c);
//             }
//         }

//         for (char c : ans)
//         {
//             cout << c;
//         }
//         cout << endl;
//     }

//     return 0;
// }