/*
This will LTE because that loop is SLOW. To resolve, just check whether n is a power of 2. Whenever it's power of 2 it print NO
#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        int yes = 0;
        for(long long i = 2; i <= n; i++) {
            if(n % i == 0) {
                if(i % 2 != 0) {
                    puts("YES");
                    yes = 1;
                    break;
                }
            }
        }
        if(yes == 0) puts("NO");
    }
    return 0;
}

*/

#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        int yes = 0;
        // when n is power of two then the bit is 10000... So n-1 is 01111... If we bitwise AND n and n-1 the result is 000... or 0. So 
        if((n & (n-1)) == 0) puts("NO");
        else puts("YES");
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1475/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/