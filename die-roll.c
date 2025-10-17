#include <stdio.h>

int main(void) {
    int y, w;
    scanf("%d %d", &y, &w);
    int max = (y >= w) ? y : w;
    int posb = 6 - (max - 1);
    int denum = 6;
    if(posb == 0 || posb == 6) {
        posb /= 6;
        denum = 1;
    } else if(posb % 2 == 0) {
        posb /= 2;
        denum /= 2;
    } else if(posb % 3 == 0) {
        posb /= 3;
        denum /= 3;
    }

    printf("%d/%d", posb, denum);
    return 0;
}