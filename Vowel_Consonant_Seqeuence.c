#include <stdbool.h>
#include<stdio.h>
#include<string.h>
bool iv(char ch) {
    char vowels[] = "aeiou";
    for (int i = 0; i < 5; i++) {
        if (vowels[i] == ch) {
            return true;
        }
    }
    return false;
}
int main() {
    char s[10001];
    scanf("%s", s);
    char x = iv(s[0]) ? 'V' : 'C';
    for (int i = 1; i < strlen(s); i++) {
        char y = iv(s[i]) ? 'V' : 'C';
        if (y != x) {
            printf("%c", x);
            x = y;
        }
    }
    printf("%c", x);
}