#include <iostream>
#include <vector>
#include <cstring>

int main() {
    int t;
    std::cin >> t;

    std::vector<std::vector<char>> answer1(t, std::vector<char>(5));
    std::vector<std::vector<char>> answer2(t, std::vector<char>(5));

    for (int i = 0; i < t; i++) {
        std::vector<char> a(5);
        std::vector<char> b(5);
        std::cin >> a.data() >> b.data(); 

        char temp = a[0];
        a[0] = b[0];
        b[0] = temp;

        strcpy(answer1[i].data(), a.data());
        strcpy(answer2[i].data(), b.data());
    }

    for (int i = 0; i < t; i++) {
        std::cout << answer1[i].data() << " " << answer2[i].data() << '\n';
    }
}