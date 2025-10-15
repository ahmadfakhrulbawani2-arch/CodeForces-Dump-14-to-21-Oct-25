#include <iostream>
#include <vector>
#include <string>

int main(void) {
    int t;
    std::cin >> t;
    std::vector<std::string> answer(t);
    
    for (int i = 0; i < t; i++) {
        int a, b, c;
        std::cin >> a >> b >> c;

        if (a + b >= 10 || a + c >= 10 || b + c >= 10) {
            answer[i] = "YES";
        } else {
            answer[i] = "NO";
        }
    }

    for (int i = 0; i < t; i++) {
        std::cout << answer[i] << std::endl;
    }

    return 0;
}
