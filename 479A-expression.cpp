#include <iostream>

int main(void) {
    int a, b, c;
    std::cin >> a >> b >> c;

    int res1 = a + b*c, 
    res2 = a*(b+c),
    res3 = a*b*c,
    res4 = (a+b) * c,
    res5 = a*b + c,
    res6 = a+b+c,
    max;

    if(res1 >= res2 && res1 >= res3 && res1 >= res4 && res1 >= res5 && res1 >= res6) max = res1;
    else if(res2 >= res1 && res2 >= res3 && res2 >= res4 && res2 >= res5 && res2 >= res6) max = res2;
    else if(res3 >= res2 && res3 >= res1 && res3 >= res4 && res3 >= res5 && res3 >= res6) max = res3;
    else if(res4 >= res2 && res4 >= res3 && res4 >= res1 && res4 >= res5 && res4 >= res6) max = res4;
    else if(res5 >= res2 && res5 >= res3 && res5 >= res4 && res5 >= res1 && res5 >= res6) max = res5;
    else if(res6 >= res2 && res6 >= res3 && res6 >= res4 && res6 >= res1 && res6 >= res5) max = res6;

    std::cout << max << std::endl;
    return 0;
}

/*

Link: https://codeforces.com/problemset/problem/479/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

*/

/*

cleaner version

#include <iostream>
#include <algorithm> // for std::max
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int res1 = a + b*c;
    int res2 = a*(b+c);
    int res3 = a*b*c;
    int res4 = (a+b)*c;
    int res5 = a*b + c;
    int res6 = a + b + c;

    int maxVal = max({res1, res2, res3, res4, res5, res6});
    cout << maxVal << "\n";

    return 0;
}


*/