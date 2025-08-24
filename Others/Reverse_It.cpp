#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int cls;
    char sec;
    int id;
};
int main(){
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].id;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[n-1-i].sec << " " << a[i].id << endl;
    }
    
    
    return 0;
}