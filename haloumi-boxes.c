#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    scanf("%d", &t);
    char out[t][4];

    for(int i = 0; i < t; i++) {
        int n, k;
        scanf("%d %d", &n, &k);
        int arr[n];
        for(int j = 0; j < n; j++) scanf("%d", &arr[j]);

        int order = 1;
        for(int j = 0; j < n-1; j++) {
            if(arr[j] > arr[j+1]) {
                order = 0;
                break;
            }
        }

        if(k == 1)
            if(order) strcpy(out[i], "YES");
            else strcpy(out[i], "NO");
        else if(k >= 2) strcpy(out[i], "YES");
    }

    for(int i = 0; i < t; i++) printf("%s\n", out[i]);
    return 0;
}