#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    int answer[t];

    for (int i = 0; i < t; i++) {
        int len;
        scanf("%d", &len);
        int arr[len];
        for (int j = 0; j < len; j++) {
            scanf("%d", &arr[j]);
        }

        int freq[101] = {0};
        for (int j = 0; j < len; j++) {
            freq[arr[j]]++;
        }

        int uniqueIndex = -1;
        for (int j = 0; j < len; j++) {
            if (freq[arr[j]] == 1) {
                uniqueIndex = j + 1;
                answer[i] = uniqueIndex;
                break;
            }
        }
    }

    for (int i = 0; i < t; i++) {
        printf("%d\n", answer[i]);
    }

    return 0;
}
