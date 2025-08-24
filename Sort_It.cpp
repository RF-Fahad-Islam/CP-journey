#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student i, Student j)
{
    int total_marks_i = i.math_marks + i.eng_marks;
    int total_marks_j = j.math_marks + j.eng_marks;
    return total_marks_i == total_marks_j ? i.id < j.id : total_marks_i > total_marks_j;
}

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }

    return 0;
}