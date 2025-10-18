#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    int answer[t];

    for(int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        if(n % 2 == 0) answer[i] = n/2;
        else {
            n--;
            answer[i] = n/2;
        }
    }

    for(int i = 0; i < t; i++) printf("%d\n", answer[i]);
    return 0;
}