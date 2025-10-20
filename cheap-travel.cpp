#include <iostream>
#include <algorithm>

int main() {
    int n, m, a, b;
    std::cin >> n >> m >> a >> b;

    int specialTicket = 0;
    int ordinaryTicket = 0;

    if(b < a * m) { 
        specialTicket = n / m;
        ordinaryTicket = n % m;
    } else {        
        ordinaryTicket = n;
    }

    int totalMin;
    if(n % m != 0) {
        totalMin = specialTicket * b + std::min(ordinaryTicket * a, b);
    } else {
        totalMin = specialTicket * b + ordinaryTicket * a;
    }

    std::cout << totalMin << std::endl;

    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/466/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25


Sometimes I forgot to change the link. Sorry
*/ 