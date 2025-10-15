#include <iostream>


bool isComposite(int x) {
    if (x < 4) {
        return false;
    }
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return true;
        }
    }
    return false;
}

void printRes(int n) {
    for (int a = 4; a < n; a++) {
        int b = n - a;
        if (isComposite(a) && isComposite(b)) {
            std::cout << a << " " << b << std::endl;
            return;
        }
    }
}

int main(void) {
    int n;
    std::cin >> n;

    printRes(n);
    return 0;
}
