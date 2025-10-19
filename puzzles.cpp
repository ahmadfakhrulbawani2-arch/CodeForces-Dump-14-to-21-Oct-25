#include <iostream>
#include <vector>

int main(void) {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> pcs(m);
    for(int i = 0; i < m; i++) std::cin >> pcs[i];

    for(int i = 0; i < m-1; i++) {
        for(int j = 0; j < m-i-1; j++) {
            if(pcs[j] > pcs[j+1]) {
                // int temp = pcs[j];
                // pcs[j] = pcs[j+1];
                // pcs[j+1] = temp;
                std::swap(pcs[j], pcs[j+1]);
            }
        }
    }

    int currMinDiff = 100000000;
    for(int i = 0; i <= m-n; i++) {
        int diff = pcs[i+n-1] - pcs[i];
        currMinDiff = (diff < currMinDiff) ? diff : currMinDiff;
    }

    std::cout << currMinDiff << std::endl;
    return 0;
}

/*

Link: https://codeforces.com/problemset/problem/337/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

*/