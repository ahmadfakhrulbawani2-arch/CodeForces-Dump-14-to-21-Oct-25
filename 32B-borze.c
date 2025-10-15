#include <stdio.h>
#include <string.h>

int main(void) {
    char borze[201];
    scanf("%s", borze);
    int len = strlen(borze);
    int answer[201] = {0};
    int count = 0;
    for(int i = 0; i < len; i++) {
        switch(borze[i]) {
            case '.':
                answer[count] = 0;
                count++;
                break;
            case '-':
                if(borze[i+1] == '.') {
                    answer[count] = 1;
                } else if(borze[i+1] == '-'){
                    answer[count] = 2;
                }
                i++;
                count++;
                break;
            default:
                break;
        }
    }

    for(int i = 0; i < count; i++) {
        printf("%d", answer[i]);
    }
    return 0;
}