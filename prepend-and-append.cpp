#include <iostream>
#include <string>
#include <vector>

int main(void) {
    int t;
    std::cin >> t;
    std::vector<int> answer(t);

    for(int i = 0; i < t; i++) {
        int len;
        std::cin >> len;
        int minStr = len;
        std::string input;
        std::cin >> input;
        int frontIdx = 0, rearIdx = len-1;
        while(frontIdx <= rearIdx) {
            if(input[frontIdx++] != input[rearIdx--]) minStr -= 2;
            else break;
        }
        
        answer[i] = minStr;
    }

    for(int i = 0; i < t; i++) std::cout << answer[i] << std::endl;

    return 0;
}