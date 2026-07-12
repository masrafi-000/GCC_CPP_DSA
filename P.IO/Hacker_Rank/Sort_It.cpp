#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char sec;
    int id;
    float math_marks;
    float eng_marks;

    int total()
    {
        return math_marks + eng_marks;
    }
};

int main()
{
    int n;
    cin >> n;

    Student s[100];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].nm >> s[i].cls >> s[i].sec >> s[i].id >> s[i].math_marks >> s[i].eng_marks;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (s[j].total() < s[j + 1].total() || (s[j].total() == s[j + 1].total() && s[j].id > s[j + 1].id))
            {
                swap(s[j], s[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << s[i].nm << " "
             << s[i].cls << " "
             << s[i].sec << " "
             << s[i].id << " "
             << s[i].math_marks << " "
             << s[i].eng_marks << endl;
    }

    return 0;
}
