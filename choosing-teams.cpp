#include <iostream>
#include <vector>

int main(void) {
    int n, k;
    std::cin >> n; std::cin >> k;
    std::vector<int> y(n);
    for(int i = 0; i < n; i++) {
        std::cin >> y[i];
        y[i] = 5 - y[i];
    }

    int people = 0;
    for(int i = 0; i < n; i++) {
        if(y[i] >= k) {
            people++;
        } 
    }

    int team = people / 3;
    std::cout << team;
    
    return 0;
}