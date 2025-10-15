#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    char answer[t][4];

    for(int i = 0; i < t; i++) {
        int n; 
        scanf("%d", &n);
        int arr[n];
        int sum = 0;

        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }

        if(sum % 2 == 0) {
            strcpy(answer[i], "YES");
        } else {
            strcpy(answer[i], "NO");
        }
    }

    for(int i = 0; i < t; i++) {
        printf("%s\n", answer[i]);
    }
}

/* 
this problem will trick you 
So we know that the sum of colored element parity should be the same to output YES. 
This means that the sum of the colored red + blue must be EVEN. 
Because even+even = even & odd + odd = even as well


In:
7
8
1 2 4 3 2 3 5 4
2
4 7
3
3 9 8
2
1 7
5
5 4 3 2 1
4
4 3 4 5
2
50 48


Out:
YES
NO
YES
YES
NO
YES
YES

*/