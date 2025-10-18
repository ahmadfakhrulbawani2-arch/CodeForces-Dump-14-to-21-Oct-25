#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++) printf("%d ", arr[i]); printf("\n");

    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/405/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

*/


/*

2   3   8

        *
        *
        *
        *
        *
    *   *
*   *   *
*   *   *


3    6   3   7   2

             *
     *       *
     *       *
     *       *
*    *   *   *
*    *   *   *   *
*    *   *   *   *


2    3   3   6   7

ITS SORTED!
*/