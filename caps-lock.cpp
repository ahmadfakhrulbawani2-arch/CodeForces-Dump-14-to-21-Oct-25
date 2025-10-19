#include <iostream>
#include <string>
#include <cctype>

int main(void) {
    std::string str;
    std::cin >> str;
    int len = str.size();

    bool allCaps = true;
    bool capsExceptFirst = (std::islower(str[0]) != 0);

    // Cek apakah semua huruf setelah pertama kapital
    for (int i = 1; i < len; i++) {
        if (!std::isupper(str[i])) {
            allCaps = false;
            capsExceptFirst = false;
            break;
        }
    }

    if (allCaps || capsExceptFirst) {
        for (int i = 0; i < len; i++) {
            if (std::islower(str[i]))
                str[i] = std::toupper(str[i]);
            else
                str[i] = std::tolower(str[i]);
        }
    }

    std::cout << str << '\n';
    return 0;
}
