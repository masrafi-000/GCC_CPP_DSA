#include <bits/stdc++.h>

using namespace std;

class Sutdent
{
public:
    string nm;
    int cls;
    char sec;
    int id;
};

int main()
{
    int n;
    cin >> n;

    Sutdent s[100];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i].nm >> s[i].cls >> s[i].sec >> s[i].id;
    }

    for (int i = 0; i < n/2; i++)
    {
        char temp = s[i].sec;
        s[i].sec = s[n - i - 1].sec;
        s[n - i - 1].sec = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << s[i].nm << " " << s[i].cls << " " << s[i].sec << " " << s[i].id << endl;
    }

    return 0;
}
