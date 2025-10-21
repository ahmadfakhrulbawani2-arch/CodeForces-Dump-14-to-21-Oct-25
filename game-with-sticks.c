#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    int min = (n < m) ? n : m;
    if(min % 2 == 0) printf("Malvika\n");
    else printf("Akshat\n");
    return 0;
}


/*
Link: https://codeforces.com/problemset/problem/451/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/

/*

*/