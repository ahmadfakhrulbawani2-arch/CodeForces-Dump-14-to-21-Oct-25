#include <iostream>
#include <vector>
#include <string>

int main(void) {
    int t;
    std::cin >> t;
    std::vector<std::string> answer(t);

    for (int i = 0; i < t; i++) {
        std::string input;
        std::cin >> input;
        int len = static_cast<int>(input.size());

        answer[i] += input[0];
        for (int j = 1; j < len - 1; j++) {
            if (input[j] == input[j + 1]) {
                answer[i] += input[j];
                j++;
            }
        }
        answer[i] += input[len - 1];
    }

    for (int i = 0; i < t; i++) {
        std::cout << answer[i] << std::endl;
    }

    return 0;
}
