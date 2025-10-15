#include <iostream>
#include <vector>

int main(void) {
    int t;
    std::cin >> t;
    std::vector<int> answer(t);
    for(int i = 0; i < t; i++) {
        int a, b;
        std::cin >> a; std::cin >> b;

        if(a > b) answer[i] = a-b;
        else answer[i] = b-a;
    }

    for(int i = 0; i < t; i++) {
        std::cout << answer[i] << std::endl;
    }

    return 0;
}