#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        if (n % 3 == 0)
            printf("Second\n");
        else
            printf("First\n");
    }

    return 0;
}
