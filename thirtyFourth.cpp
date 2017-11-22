#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long t;
    long long copy_num = 3;
    cin >> t;
    while(t > copy_num)
    {
        t = t - copy_num;
        copy_num = 2 * copy_num;
    }
    std::cout << (copy_num - t + 1) << '\n';
    return 0;
}
