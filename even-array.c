#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    int out[t];

    for(int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        int arr[n];
        int erorEven = 0, erorOdd = 0;
        for(int j = 0; j < n; j++) { 
            scanf("%d", &arr[j]);
            if(arr[j] % 2 != 0 && j % 2 == 0)
                erorEven++;
            else if(arr[j] % 2 == 0 && j % 2 != 0)
                erorOdd++;
        }

        if(erorEven == erorOdd) out[i] = erorEven;
        else out[i] = -1;
    }

    for(int i = 0; i < t; i++) printf("%d\n", out[i]);
    return 0;
}