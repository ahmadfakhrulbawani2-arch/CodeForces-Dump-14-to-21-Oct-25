#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
    char p[101];
    scanf("%s", p);
    int len = strlen(p);
    
    bool printYes = false;
    for(int i = 0; i < len; i++) {
        switch(p[i]) {
            case 'H':
                printYes = true;
                break;
            case 'Q':
                printYes = true;
                break;
            case '9':
                printYes = true;
                break;
            default:
                break;
        }
        if(printYes) break;
    }

    if(printYes) printf("YES\n");
    else printf("NO\n");
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/133/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

*/