#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    scanf("%d", &t);
    int out[t];

    for (int j = 0; j < t; j++) {
        out[j] = 0;
        int freq[26] = {0};
        int n;
        scanf("%d", &n);
        char input[n + 1];
        scanf("%s", input);

        for (int i = 0; i < n; i++) freq[input[i] - 'A']++;

        for (int i = 0; i < 26; i++) {
            if (freq[i] == 1) out[j] += 2;
            else if (freq[i] > 1) out[j] += (freq[i]-1) + 2;
        }
    }

    for (int i = 0; i < t; i++) printf("%d\n", out[i]);

    return 0;
}
