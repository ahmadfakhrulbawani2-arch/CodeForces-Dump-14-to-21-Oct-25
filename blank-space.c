#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    int answer[t];

    for(int i = 0 ; i < t ; i++) {
        int len;
        scanf("%d", &len);
        int arr[len];
        for(int i = 0; i < len; i++) {
            scanf("%d", &arr[i]);
        }

        int curLong = 0, max = 0;
        for(int j = 0; j < len; j++) {
            if(arr[j] == 0) {
                curLong++;
            } 
            max = (curLong > max) ? curLong : max;
            if(arr[j] != 0) {
                curLong = 0;
            }
        }
        answer[i] = max;
    }

    for(int i = 0; i < t; i++) {
        printf("%d\n", answer[i]);
    }
    return 0;
} 