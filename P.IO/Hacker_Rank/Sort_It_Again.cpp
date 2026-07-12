#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char sec;
    long long int id;
    float math_marks;
    float eng_marks;
};

bool compare(Student a, Student b)
{
    if (a.eng_marks != b.eng_marks)
    {
        return a.eng_marks > b.eng_marks;
    }

    if (a.math_marks != b.math_marks)
    {
        return a.math_marks > b.math_marks;
    }

    return a.id < b.id;
}

int main()
{
    int n;
    cin >> n;

    Student s[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i].nm
             >> s[i].cls
             >> s[i].sec
             >> s[i].id
             >> s[i].math_marks
             >> s[i].eng_marks;
    }

    sort(s, s + n, compare);

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
