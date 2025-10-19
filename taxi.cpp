/*
This will wrong answer on test 37. This is because there's no constraints group here. To resolve, just group which group is only 1, 2, 3, and 4 children.Then pair 1 with 3, 2 with 2, and 4 with 1 taxi.

#include <iostream>

int main(void) {
    int n;
    std::cin >> n;
    int sumChild = 0;
    for(int i = 0; i < n; i++) {
        int groups;
        std::cin >> groups;
        sumChild += groups;
    }
    int taxi = sumChild /= 4;
    if(sumChild % 4 != 0) taxi++;
    std::cout << taxi << std::endl;
    return 0;
}

*/

#include <iostream>
#include <cmath>

int main(void) {
    int n;
    std::cin >> n;
    int group1 = 0;
    int group2 = 0;
    int group3 = 0;
    int taxi = 0;
    for(int i = 0; i < n; i++) { 
        int input; std::cin >> input;
        switch (input)
        {
        case 1:
            group1++;
            break;
        case 2:
            group2++;
            break;
        case 3:
            group3++;
            break;
        case 4:
            taxi++;
            break;
        default:
            break;
        }
    }

    int pair31 = (group1 < group3) ? group1 : group3;
    taxi += pair31;
    group1 -= pair31;
    group3 -= pair31;

    taxi += group3;

    taxi += group2 / 2;
    group2 %= 2;

    if(group2 > 0) {
        taxi++;
        group1 -= (group1 >= 2 ? 2 : group1);
    }

    if(group1 > 0) {
        taxi += ceil(group1/4.0); // change the denumerator to float or double
    }

    std::cout << taxi << std::endl;
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/158/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25


Sometimes I forgot to change the link. Sorry
*/ 