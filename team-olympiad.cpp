#include <iostream>
#include <vector>

int main(void) {
    int t;
    std::cin >> t;
    std::vector<int> arr(t);

    for(int i = 0; i < t; i++) {
        std::cin >> arr[i];
    }

    std::vector<int> count1;
    std::vector<int> count2;
    std::vector<int> count3;
    int count = 0;
    for(int i = t; i > 0; i--) {
        switch (arr[i])
        {
        case 1:
            count1.push_back(i+1);
            break;
        case 2:
            count2.push_back(i+1);
            break;
        case 3:
            count3.push_back(i+1);
            break;
        default:
            break;
        }
    }

    int len1 = static_cast<int>(count1.size());
    int len2 = static_cast<int>(count2.size());
    int len3 = static_cast<int>(count3.size());

    if(len1 < len2) {
        count = (len1 < len3) ? len1 : len3;
    } else {
        count = (len2 < len3) ? len2 : len3;
    }
    std::cout << count << std::endl;
    if(count == 0) return 0;

    for(int i = count - 1; i >= 0; i--) {
        std::cout << count1[i] << " " << count2[i] << " " << count3[i] << std::endl;
    }
    
    return 0;
}