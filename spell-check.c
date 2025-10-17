#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        char str[n + 1];
        scanf("%s", str);

        if (n != 5) { // kalau panjang bukan 5, langsung salah
            printf("NO\n");
            continue;
        }

        int freq[128] = {0}; // ASCII frequency
        for (int i = 0; i < 5; i++) freq[(int)str[i]]++;

        // cek apakah huruf2nya persis T,i,m,u,r
        if (freq['T'] == 1 && freq['i'] == 1 && freq['m'] == 1 && freq['u'] == 1 && freq['r'] == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
