#include <stdio.h>

int main(void) {
    long long x;
    scanf("%lld", &x);
    int digitX[19] = {0};
    int freqNum[10] = {0};
    int idx = 18;
    int countDigit = 0;
    
    while(x > 0) {
        digitX[idx--] = x % 10;
        freqNum[x % 10]++;
        x /= 10;
        countDigit++;
    }

    int start = ++idx; // this is the start index
    for(idx; idx < 19; idx++) {
        if(idx == start && digitX[idx] == 9) continue;
        int invert = 9 - digitX[idx];
        if(invert < digitX[idx]) digitX[idx] = invert;
    }

    for(start; start < 19; start++) {
        printf("%d", digitX[start]);
    }

    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/514/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/