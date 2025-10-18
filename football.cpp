#include <iostream>
#include <vector>
#include <string>

int main(void) {
    std::string str;
    std::cin >> str;
    int len = static_cast<int>(str.size());
    int countStanding = 1;
    int currMax = 0;
    for(int i = 0; i < len-1; i++) {
        if(str[i] == str[i+1]) { 
            countStanding++;
        } else {
            currMax = (countStanding > currMax) ? countStanding : currMax;
            countStanding = 1;
        }
    }
    currMax = (countStanding > currMax) ? countStanding : currMax;

    if(currMax >= 7) std::cout << "YES\n";
    else std::cout << "NO\n";

    return 0;
}