#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    int answer[t];

    for(int i = 0; i < t; i++) {
        int max, min;
        int arr[3];
        scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

        if(arr[0] > arr[1]) {
            max = (arr[0] > arr[2]) ? 0 : 2;
        } else {
            max = (arr[1] > arr[2]) ? 1 : 2;
        }

        if(arr[0] < arr[1]) {
            min = (arr[0] < arr[2]) ? 0 : 2;
        } else {
            min = (arr[1] < arr[2]) ? 1 : 2;
        }

        if(max == 0 && min == 1 || max == 1 && min == 0) {
            answer[i] = arr[2];
        } else if(max == 0 && min == 2 || max == 2 && min == 0) {
            answer[i] = arr[1];
        } else if(max == 1 && min == 2 || max == 2 && min == 1) {
            answer[i] = arr[0];
        }
    }

    for(int i = 0 ; i < t; i++) {
        printf("%d\n", answer[i]);
    }
    return 0;
}