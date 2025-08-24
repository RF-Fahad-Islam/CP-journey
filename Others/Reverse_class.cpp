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
    string secs="";
    for (int i = 0; i < n; i++)
    {
        secs += a[i].sec;
    }
    reverse(secs.begin(), secs.end());
    for (int i = 0; i < n; i++)
    {
        a[i].sec = secs[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << endl;
    }
    
    
    return 0;
}