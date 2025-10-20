/*
This will TLE but easier to understand so you get the point. 
To resolve use sort (qsort() from stdlib.h) and set upper bound. Then printf the count

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int shops[n];
    for(int i = 0; i < n; i++) scanf("%d", &shops[i]);
    int q;
    scanf("%d", &q);
    while(q--) {
        int m;
        scanf("%d", &m);
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(m >= shops[i]) count++;
        }
        printf("%d\n", count);
    }
    return 0;
}

*/

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    int x = *(int*) a;
    int y = *(int*) b;
    return x-y;
}

int upper_bound(int *arr, int n, int m) {
    int l = 0, r = n; // r is the bound of the biggest element
    while(l < r) {
        int i = l + (r - l)/2;
        if(arr[i] <= m) l = i + 1;
        else r = i; // because the mid is > m, then the new bound is i then we loop again until l reach r.
    }
    return l;
}

int main(void) {
    int n;
    scanf("%d", &n);
    int shops[100000]; 
    // use static to prevent overflow. But side effect is big memory usage, but fine because most codeforce memory limit is beyond this size (mostly safe). Btw max lenght is 200k and many people set 100500

    for(int i = 0; i < n; i++) scanf("%d", &shops[i]);
    qsort(shops, n, sizeof(int), cmp);
    int q; 
    scanf("%d", &q);
    while(q--) {
        int m;
        scanf("%d", &m);
        int count = upper_bound(shops, n, m);
        printf("%d\n", count);
    }
    
    return 0;
}

/*

Link: https://codeforces.com/problemset/problem/706/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/