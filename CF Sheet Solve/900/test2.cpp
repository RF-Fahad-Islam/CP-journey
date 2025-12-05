#include <stdio.h>


int value[26] = {0};
bool letter_used[26] = {0};
bool digit_used[10] = {0};
bool unused[26] = {0};
bool solutionFound = 0;


bool isSolved (){
    if (value['H'-'A']==0 || value['C'-'A']==0 || value['G'-'A'==0]) return false;
    int first = 1000*value['C'-'A']+100*value['O'-'A']+10*value['M'-'A']+value['E'-'A'];
    int second = 1000*value['G'-'A']+100*value['O'-'A']+10*value['N'-'A']+value['E'-'A'];
    int sum = 10000*value['H'-'A']+1000*value['O'-'A']+100*value['M'-'A']+10*value['E'-'A']+value['S'-'A'];
    if (first+second==sum) return true;
    return false;
}


void printSolution (){
    for (int i=0; i<26; i++)
        if (!unused[i])
            printf("%c = %d\n", i+'A', value[i]);
}


void assign(int index){
    if (solutionFound) return;
    if (index==26){
        if (isSolved()){
            printSolution();
            solutionFound = 1;
        }
        return;
    }
   
    if (letter_used[index]){
        assign(index+1);
        return;
    }
    for (int i=0; i<10; i++){
        if (!digit_used[i]){
            value[index] = i;
            letter_used[index] = 1;
            digit_used[i] = 1;
            assign (index+1);
            letter_used[index] = 0;
            digit_used[i] = 0;
        }
    }
}






int main() {
    for (int i=0; i<26; i++) letter_used[i] = 1;
    char a[5] = "COME";
    char b[5] = "GONE";
    char c[6] = "HOMES";
    for (auto x: a) letter_used[x-'A'] = 0;
    for (auto x: b) letter_used[x-'A'] = 0;
    for (auto x: c) letter_used[x-'A'] = 0;
    for (int i=0; i<26; i++){
       if (letter_used[i]) unused[i] = 1;
    }
    assign(0);
}