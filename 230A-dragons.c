#include <stdio.h>

int main(void) {
    int s, n;
    scanf("%d %d", &s, &n);

    int x[n], y[n];
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1-i; j++) {
            int tempX, tempY;
            if(x[j] > x[j+1]) {
                tempX = x[j];
                tempY = y[j];
                x[j] = x[j+1];
                x[j+1] = tempX;
                y[j] = y[j+1];
                y[j+1] = tempY;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        if(s > x[i]) {
            s += y[i];
        } else {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/230/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

*/