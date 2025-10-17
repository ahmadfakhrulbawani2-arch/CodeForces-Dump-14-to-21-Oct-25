#include <iostream>
#include <string>

int main(void) {
    int t;
    std::cin >> t;
    int Wmishka = 0, Wchris = 0;
    std::string answer;

    for(int i = 0; i < t; i++) {
        int m, c;
        std::cin >> m >> c;
        if(m > c) Wmishka++;
        else if(m == c) continue;
        else Wchris++;
    }

    if(Wmishka > Wchris) answer = "Mishka";
    else if(Wmishka < Wchris) answer = "Chris";
    else answer = "Friendship is magic!^^";

    std::cout << answer << std::endl;
    return 0;
}