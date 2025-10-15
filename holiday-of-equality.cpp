#include <iostream>

int main(void) {
    int n;
    std::cin >> n;
    int arr[n];

    std::cin >> arr[0];
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        std::cin >> arr[i];
        max = (arr[i] > max) ? arr[i] : max;
    }

    int burles = 0;
    for(int i = 0; i < n; i++) {
        burles += (max - arr[i]);
    }

    std::cout << burles << std::endl;
    return 0;
}