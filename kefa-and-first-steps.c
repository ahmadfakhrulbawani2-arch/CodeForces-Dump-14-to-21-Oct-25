#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int currMax = 0, currCount = 1;
    for(int i = 0; i < n-1; i++) {
        if(arr[i] <= arr[i+1]) currCount++;
        else { 
            currMax = (currMax > currCount) ? currMax : currCount;
            currCount = 1;
        }
    }
    currMax = (currMax > currCount) ? currMax : currCount;

    printf("%d", currMax);
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/580/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

*/