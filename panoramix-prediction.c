#include <stdio.h>
#include <stdbool.h>

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);

    int nextPrime = n + 1;
    while (!isPrime(nextPrime)) nextPrime++;

    printf((nextPrime == m) ? "YES\n" : "NO\n");

    return 0;
}
