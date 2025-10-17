#include <iostream>
#include <vector>
#include <string>

int main(void) {
    int t;
    std::cin >> t;
    std::string flags = "codeforces";
    std::vector<int> answer(t);

    for(int i = 0; i < t; i++) {
        answer[i] = 0;
        std::string input;
        std::cin >> input;
        int len = static_cast<int>(input.size());
        for(int j = 0; j < len; j++) {
            if(input[j] != flags[j]) {
                answer[i]++;
            }
        }
    }

    for(int i = 0; i < t; i++) std::cout << answer[i] << std::endl;
    return 0;
}