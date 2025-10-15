#include <iostream>
#include <vector>

int main(void) {
    int t;
    std::cin >> t;
    std::vector<int> answer(t);

    for (int i = 0; i < t; i++) {
        int k;
        std::cin >> k;

        int x = 1;
        int count = 0;
        int likedNum = 0;

        while (count < k) {
            if (x % 3 != 0 && x % 10 != 3) {
                count++;
                likedNum = x;
            }
            x++;
        }

        answer[i] = likedNum;
    }

    for (int i = 0; i < t; i++) {
        std::cout << answer[i] << std::endl;
    }

    return 0;
}
