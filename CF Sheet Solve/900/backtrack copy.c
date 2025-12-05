#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int value[26] = {0};
bool letter_used[26] = {0};
bool digit_used[10] = {0};
bool unused[26] ={0};
bool solutionFound = 0;
char a[] = "COME";
char b[] = "GONE";
char c[] = "HOMES";
char leading[3];

int sumChar(char s[]){
    int result = 0;
    int place = 1;
    int len = (int)strlen(s);
    for (int i = len - 1; i >= 0; i--)
    {
        result += value[s[i]-'A'] * place;
        place *= 10;
    }
    return result;
}


bool isLeading(char ch) {
    return ch == a[0] || ch == b[0] || ch == c[0];
}

bool isSolved (){
    int first = sumChar(a);
    int second = sumChar(b);
    int sum = sumChar(c);
    if (first+second==sum) return true;
    return false;
}


void printSolution (){
    for (int i=0; i<26; i++)
        if (!unused[i])
            printf("%c = %d\n", i+'A', value[i]);
    // printf("COUNTS -> %d",cnt);
}

void assign(int index){
    if (solutionFound) return; //breaking if one solution is obtained
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
        if (digit_used[i]) continue;
        char letter = index + 'A';
        // prevent leading letters from being assigned zero
        if (i==0 && isLeading(letter)) continue;

        value[index] = i;
        letter_used[index] = 1;
        digit_used[i] = 1;

        assign (index+1);

        value[index] = 0;
        letter_used[index] = 0;
        digit_used[i] = 0;
    }

}

void set_inputs(){
    for (int i=0; i<26; i++) letter_used[i] = 1;
    for (int i=0; a[i] != '\0'; i++) letter_used[a[i]-'A'] = 0;
    for (int i=0; b[i] != '\0'; i++) letter_used[b[i]-'A'] = 0;
    for (int i=0; c[i] != '\0'; i++) letter_used[c[i]-'A'] = 0;
    for (int i=0; i<26; i++){
       if (letter_used[i]) unused[i] = 1;
    }
}

int main() {
    set_inputs();
    assign(0);
    return 0;
}
