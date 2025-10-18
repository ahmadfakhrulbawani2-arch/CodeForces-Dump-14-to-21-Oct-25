#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    for(int i = 0; i < n; i++) { 
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    int countCoin = 0, countVal = 0;
    for(int i = n-1; i >= 0; i--) {
        if(countVal <= sum/2) {
            countCoin++;
            countVal += arr[i];
        }
    }

    printf("%d", countCoin);
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/160/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

*/