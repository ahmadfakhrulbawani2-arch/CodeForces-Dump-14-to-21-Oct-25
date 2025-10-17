#include <stdio.h>
#include <string.h>

int main(void) {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int totCal = 0;
    char str[100001];
    scanf("%s", str);
    int lenStr = strlen(str);
    for(int i = 0; i < lenStr; i++) {
        switch (str[i])
        {
        case '1':
            totCal += a;
            break;
        case '2':
            totCal += b;
            break;
        case '3':
            totCal += c;
            break;
        case '4':
            totCal += d;
            break;
        default:
            break;
        }
    }

    printf("%d\n", totCal);
}