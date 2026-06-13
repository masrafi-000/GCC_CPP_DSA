#include <bits/stdc++.h>

using namespace std;

class Student {
public:
    int id;
    string name;
    char section;
    int marks;

    Student(int id, string name, char section, int marks) {
        this->id = id;
        this->name = name;
        this->section = section;
        this->marks = marks;
    }
};


int main()
{
    int t;
    cin >> t;
    
    while(t--){
        Student *max  = NULL;

        for(int i =0; i< 3; i++){
            int id, marks;
            string name;
            char section;

            cin >> id >> name >> section >> marks;

            Student *s = new Student(id, name, section, marks);

            if(max == NULL){
                max = s;
            }
            else if(s->marks > max->marks){
                max = s;
            }
            else if(s->marks == max->marks && s->id < max->id){
                max = s;
               
            }
        }

        cout << max->id << " " << max->name << " " << max->section << " " << max->marks << endl;

    }

    return 0;
}
