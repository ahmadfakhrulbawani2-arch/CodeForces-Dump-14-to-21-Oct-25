#include <iostream>
#include <vector>

int main(void) {
    int n; std::cin >> n;
    std::vector<int> arr(n);
    std::vector<int> odd;
    std::vector<int> even;
    for(int i = 0; i < n; i++) { 
        std::cin >> arr[i];
        if(arr[i] % 2 == 0) even.push_back(i+1);
        else odd.push_back(i+1);
    }
    int lenEven = static_cast<int> (even.size());
    int lenOdd = static_cast<int> (odd.size());

    if(lenEven == 1) std::cout << even[0] << std::endl;
    else if(lenOdd == 1) std::cout << odd[0] << std::endl;


    // std::cout << lenEven << ' ' << lenOdd << std::endl;
    return 0;
}

/*

Link: https://codeforces.com/problemset/problem/25/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

*/