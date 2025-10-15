#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    int answer[t];
    for(int i = 0; i < t; i++) {
        int temp;
        scanf("%d", &temp);
        int digitA, digitB;
        digitA = temp / 10;
        digitB = temp % 10;
        answer[i] = digitA + digitB;
    }

    for(int i = 0; i < t; i++) {
        printf("%d\n", answer[i]);
    }
    return 0;
} 