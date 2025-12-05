#include <stdio.h>
#include <stdbool.h>

int value[26] = {0};
bool digit_used[10] = {0};
bool letter_used[26] = {0};
bool solutionFound = false;

char a[1000];
char b[1000];
char c[1000];


int strlen(char s[]){
    int len = 0;
    for (int i = 0; s[i] != '\0'; i++) len++;
    return len;
    
}

// Convert string to number based on current assignment
int charToNum(char s[]) {
    int result = 0;
    int place = 1;
    int len = strlen(s);

    for (int i = len-1; i>=0 ; i--) {
        result += value[s[i] - 'A'] * place;
        place *= 10;
    }
    return result;
}

bool isLeading(int index) {
    char ch = index + 'A';
    return (ch == a[0] || ch == b[0] || ch == c[0]);
}

bool isSolved() {
    return charToNum(a) + charToNum(b) == charToNum(c);
}

void assign(int index) {
    if (solutionFound) return;

    if (index == 26) {
        if (isSolved()) {
            printSolution();
            solutionFound = true;
        }
        return;
    }

    if (letter_used[index]) {
        assign(index + 1);
        return;
    }

    for (int d = 0; d <= 9; d++) {
        // prevent leading-zero
        if (d == 0 && isLeading(index)) continue;
        if (!digit_used[d]) {
            digit_used[d] = true;
            value[index] = d;

            assign(index + 1);

            digit_used[d] = false;
        }
    }
}

void set_inputs(){
    scanf("%s\n%s\n%s", &a, &b, &c);
    for (int i=0; i<26; i++) letter_used[i] = true;
    for (int i=0; a[i] != '\0'; i++) letter_used[a[i]-'A'] = false;
    for (int i=0; b[i] != '\0'; i++) letter_used[b[i]-'A'] = false;
    for (int i=0; c[i] != '\0'; i++) letter_used[c[i]-'A'] = false;
    // setCarry();
}

// void setCarry(){
//         if(strlen(a)==strlen(b) && strlen(c)==strlen(a)+1){
//             value[c[0]-'A'] = 1; //Outmost extra letter must be 1
//             digit_used[1]=true;
//         }
// }


void printSolution() {
    for (int i = 0; i < 26; i++) {
        if (letter_used[i] == false)
        printf("%c = %d\n", i + 'A', value[i]);
    }
}

int main() {
    set_inputs();
    assign(0);
    if (!solutionFound)
        printf("No solution exists.\n");
    return 0;
}
