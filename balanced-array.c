#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        if ((n / 2) % 2 != 0) {
            printf("NO\n");
            continue;
        }
        printf("YES\n");
        for (int i = 2; i <= n; i += 2)
            printf("%d ", i);
        for (int i = 1; i < n - 1; i += 2)
            printf("%d ", i);
        printf("%d\n", 3 * (n / 2) - 1);
    }
}
