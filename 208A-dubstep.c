#include <stdio.h>
#include <string.h>

int main(void) {
    char str[201];
    scanf("%s", str);
    int len = strlen(str);
    char res[201];
    int resIdx = 0;

    for(int i = 0; i < len; i++) {
        if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B') {
            if(res[resIdx-1] != ' ' && resIdx > 0) res[resIdx++] = ' ';
            i += 2;   
        } else {
            res[resIdx++] = str[i];
        }
    }
    if(res[resIdx-1] == ' ') resIdx--;
    res[resIdx] = '\0';

    printf("%s", res);
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/208/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

*/