#include <iostream>
#include <vector>
#include <string>

int main(void) {
    int t;
    std::cin >> t;
    std::vector<std::string> answer(t);

    for(int i = 0; i < t; i++) {
        int a, b, c;
        std::cin >> a >> b >> c;
        if(a < b && b < c) answer[i] = "STAIR";
        else if(a < b && b > c) answer[i] = "PEAK";
        else answer[i] = "NONE";
    }

    for(int i = 0; i < t; i++) std::cout << answer[i] << std::endl;
    return 0;
}