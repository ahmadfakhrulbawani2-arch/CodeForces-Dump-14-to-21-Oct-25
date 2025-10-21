#include <stdio.h>

int main(void) {
    int x;
    scanf("%d", &x);
    long long freq[100001] = {0}; 
    /*I use long long array to count maximum value (value[i] = freq[i] * i) had to use /* here to prevent CE btw */
    int maxVal = 0; // this is the limit of our next loop
    for(int i = 0; i < x; i++) {
        int a;
        scanf("%d", &a);
        freq[a]++;
        maxVal = (a > maxVal) ? a : maxVal;
    }

    /*===We use dynamic programming here===*/
    long long val[100001];
    val[0] = 0;
    val[1] = freq[1];
    for(int i = 2; i <= maxVal; i++) {
        long long stepTakeI = val[i-2] + freq[i]*i; 
        // when we take i we can take i-2 which is second biggest.
        // remember we can't take i-1, i+1, and i+2. if i is maxVal then i+2 doesn't exist, thus we take i-2 instead.

        long long stepSkipI = val[i-1];
        val[i] = (stepTakeI > stepSkipI) ? stepTakeI : stepSkipI; // This guarantee all val[i] is the max value each i-th step.
    }

    printf("%lld", val[maxVal]); // we want max value so just take the maxVal;
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/455/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/