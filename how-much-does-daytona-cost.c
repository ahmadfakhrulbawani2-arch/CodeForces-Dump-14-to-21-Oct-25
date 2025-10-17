#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
    int t;
    scanf("%d", &t);
    char answer[t][4];

    for(int i = 0; i < t; i++) {
        int n, k;
        scanf("%d %d", &n, &k);
        int arr[n];
        bool answerT = false;

        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
            if(arr[j] == k) answerT = true;
        }

        if(answerT) {
            strcpy(answer[i], "YES");
        } else {
            strcpy(answer[i], "NO");
        }
    }

    for(int i = 0; i < t; i++) printf("%s\n", answer[i]);
    return 0;
}