#include <iostream>

int main(void) {
    int t;
    std::cin >> t;
    int answer[t];
    
    for(int i = 0; i < t; i++) {
        int a, b, c;
        std::cin >> a; std::cin >> b; std::cin >> c;
        int appear[10] = {0};
        appear[a]++;
        appear[b]++;
        appear[c]++;

        for(int j = 0; j < 10; j++) {
            if(appear[j] == 1) {
                answer[i] = j;
            }
        }
    }

    for(int i = 0; i < t; i++) {
        std::cout << answer[i] << std::endl;
    }
    return 0;
}