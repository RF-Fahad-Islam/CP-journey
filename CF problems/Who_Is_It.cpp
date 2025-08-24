#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    string name;
    char sec;
    int mark;

    Student(int id, string name, char sec, int mark)
    {
        this->id = id;
        this->name = name;
        this->sec = sec;
        this->mark = mark;
    }

    void out()
    {
        cout << this->id << " " << this->name << " " << this->sec << " " << this->mark << endl;
    }
};

int
main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int id;
        string name;
        char sec;
        int mark;
        cin >> id >> name >> sec >> mark;
        Student A(id, name, sec, mark);
        cin >> id >> name >> sec >> mark;
        Student B(id, name, sec, mark);
        cin >> id >> name >> sec >> mark;
        Student C(id, name, sec, mark);

        if (A.mark >= B.mark && A.mark >= C.mark)
        {
            A.out();
        }
        else if (B.mark >= C.mark && B.mark >= A.mark)
        {
            B.out();
        }
        else
        {
            C.out();
        }
    }

    return 0;
}