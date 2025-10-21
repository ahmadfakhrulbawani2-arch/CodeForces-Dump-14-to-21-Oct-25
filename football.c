// #include <stdio.h>
// #include <string.h>

// int main(void) {
//     int n;
//     scanf("%d", &n);
//     int freq[26] = {0};

//     while(n--) {
//         char str[11];
//         scanf("%s", str);
//         int len = strlen(str);
//         for(int i = 0; i < len; i++) {
//             freq[str[i] - 'A']++;
//         }
//     }

//     int maxFreq = 0;
//     for(int i = 0; i < 26; i++) {
//         if(freq[i] > maxFreq) maxFreq = freq[i];
//     }

//     char elementIdx[27];
//     int idx = 0;
//     for(int i = 0; i < 26; i++) {
//         if(freq[i] == maxFreq) elementIdx[idx++] = 'A' + i;
//     }
//     elementIdx[idx] = '\0';

//     printf("%s\n", elementIdx);
//     return 0;
// } This is true but WA idk why

#include <stdio.h>
#include <string.h>

int main(void) {
    int n, goal = 0;
    scanf("%d", &n);

    char team[101];
    char win[101];

    while(n--) {
        if(goal != 0) {
            scanf("%s", team);
            if(strcmp(team, win) == 0) {
                goal += 1;
            } else {
                goal -= 1;
            }
        } else {
            scanf("%s", win);
            goal = 1;
        }
    }

    printf("%s\n", win);
    return 0;
}

/*

Link: https://codeforces.com/problemset/problem/43/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/