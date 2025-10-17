#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    scanf("%d", &t);
    char answer[t][4];

    for(int i = 0; i < t; i++) {
        char str[4];
        scanf("%s", str);
        if(str[0] - str[2] == 1) {
            strcpy(answer[i], "NO");
        } else {
            strcpy(answer[i], "YES");
        }
    }

    for(int i = 0; i < t; i++) {
        printf("%s\n", answer[i]);
    }
    
    return 0;
}