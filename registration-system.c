/*
This will TLE on test 23, but this is easier to understand. This is because i read all the input first then print all the output. To resolve we read and print at the same loop.

#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);
    char str[n][40];
    for(int i = 0; i < n; i++) scanf("%s", str[i]);

    char registered[n][40];
    int freqRegist[n];
    int rInIdx = 0;
    for(int i = 0; i < n; i++) {
        int same = 0;
        for(int j = 0; j < rInIdx; j++) {
            if(strcmp(str[i], registered[j]) == 0) {
                printf("%s%d\n", str[i], freqRegist[j]);
                freqRegist[j]++;
                same = 1;
            }
        }
        if(same == 1) {
            continue;
        } else {
            printf("OK\n");
            freqRegist[rInIdx] = 0;
            freqRegist[rInIdx]++;
            strcpy(registered[rInIdx++], str[i]);
        }
    }
    return 0;
}

*/
#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);

    char registered[n][40];
    int freq[n];
    int total = 0;

    for (int i = 0; i < n; i++) {
        char input[40];
        scanf("%s", input);
        int found = 0;

        for (int j = 0; j < total; j++) {
            if (strcmp(input, registered[j]) == 0) {
                printf("%s%d\n", input, freq[j]);
                freq[j]++;
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("OK\n");
            strcpy(registered[total], input);
            freq[total] = 1;
            total++;
        }
    }

    return 0;
}



/*

Link: https://codeforces.com/problemset/problem/4/C

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

*/