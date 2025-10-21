#include <stdio.h>

int main(void) {
    int x;
    scanf("%d", &x);
    int countBacteria = 0;
    while(x > 0) {
        if(x % 2 == 1) countBacteria++;
        x /= 2;
    }

    printf("%d\n", countBacteria);
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/455/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/