#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    int out[t];

    for(int i = 0; i < t; i++) {
        int x, y, n;
        scanf("%d %d %d", &x, &y, &n);

        if(n % x == y) {
            out[i] = n;
        } else {
            int neg = (n % x) - y;
            if(neg > 0) out[i] = n - neg;
            else 
                out[i] = n - (x + neg);
        }
    }

    for(int i = 0; i < t; i++) printf("%d\n", out[i]);
    return 0;
}