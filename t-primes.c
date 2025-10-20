/*
This will TLE on test 63 cause it isnt fast enough lol. So just compute all prime num first

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(long long x) {
    if(x < 2) return false;
    for(long long i = 2; i*i <= x; i++) {
        if(x % i == 0) return false;
    }
    return true;
}

int main(void) {
    int n;
    scanf("%d", &n);
    long long arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    long long countDivisor = 0;
    for(int i = 0; i < n; i++) {
        long long rooti = sqrt(arr[i]);
        if(rooti*rooti == arr[i] && isPrime(rooti)) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}

*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAXN 1000000

bool isPrime[MAXN + 1];

void sieve() {
    for (int i = 2; i <= MAXN; i++) isPrime[i] = true;
    for (int i = 2; i * i <= MAXN; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAXN; j += i)
                isPrime[j] = false;
        }
    }
}

int main() {
    sieve();

    int n;
    scanf("%d", &n);

    while (n--) {
        long long x;
        scanf("%lld", &x);

        long long root = (long long)(sqrt(x) + 0.5);  
        if (root * root == x && isPrime[root])
            puts("YES");
        else
            puts("NO");
    }

    return 0;
}



/*

Link: https://codeforces.com/problemset/problem/230/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/