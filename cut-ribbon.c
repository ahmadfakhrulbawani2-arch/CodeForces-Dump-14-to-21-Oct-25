#include <stdio.h>

int main(void) {
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    
    int maxRibbon = 0;

    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= n; j++) {
            int sisa = n - (a * i + b * j);
            if(sisa < 0) break; // u can use continue but it's slower lol. Better directly break
            if(sisa % c == 0) {
                int k = sisa / c;
                int tot = i + j + k;
                if(tot > maxRibbon) maxRibbon = tot;
            }
        }
    }

    printf("%d\n", maxRibbon);
    return 0;
}

/*

Link: https://codeforces.com/problemset/problem/189/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/
