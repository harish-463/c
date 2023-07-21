#include <stdio.h>
#include <string.h>
#define MAX_LEN
char s[MAX_LEN];
int stack[MAX_LEN], top = -1;
int isValid() {
    int n = strlen(s);
    int star_indices[n], num_stars = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '*') {
            star_indices[num_stars++] = i;
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            stack[++top] = i;
        } else if (s[i] == ')') {
            if (top >= 0) {
                top--;
            } else if (num_stars > 0) {
                num_stars--;
                s[star_indices[num_stars]] = '(';
            } else {
                return 0;
            }
        }
    }
    while (top >= 0 && num_stars > 0) {
        top--;
        num_stars--;
    }
    if (top >= 0) {
        return 0;
    } else {
        return 1;
    }
}
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%s", s);
        if (isValid()) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
        top = -1;
    }
    return 0;
}
