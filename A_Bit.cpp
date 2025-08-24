#include<bits/stdc++.h>
using namespace std;
int main(){
    int lines;
    cin >> lines;
    int x = 0;
    for (int i = 0; i < lines; i++)
    {
        int out = 0;
        string cmd;
        cin >> cmd;
        if(cmd == "X++"){
            out = x++;
        } else if (cmd == "++X"){
            out = ++x;
        } else if (cmd == "X--"){
            out = x--;
        } else if (cmd == "--X"){
            out = --x;
        }

    }
    cout << x;
    
    return 0;
}