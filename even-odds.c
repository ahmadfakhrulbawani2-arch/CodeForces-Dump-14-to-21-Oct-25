#include <stdio.h>

int main(void) {
    long long n, k;
    scanf("%lld %lld", &n, &k);
    long long nOdd, nEven;

    if(n % 2 == 0) nOdd = n/2;
    else nOdd = (n+1)/2;
    nEven = n-nOdd;

    long long res;
    if(k <= nOdd) {
        res = 1 + 2*(k-1);
    } else {
        k -= nOdd;
        res = 2 + 2*(k-1);
    }
    printf("%lld", res);
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/318/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

*/