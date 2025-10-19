#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    int house[m];
    for(int i = 0; i < m; i++) scanf("%d", &house[i]);
    int pos = 1;
    long long count = 0; // cause it can be up to more 10^10
    for(int i = 0; i < m; i++) {
        if(house[i] >= pos) count += house[i] - pos;
        else count += (n-pos) + house[i];
        pos = house[i];
    }

    printf("%lld\n", count);
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/339/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

*/