#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, d, y;
    cin >> n;
    int s1 = 0, s2 = 0;
    int x = n / 1000;
    while (x != 0) {
        d = x % 10;
        s1 += d;
        x = x/10;
    }
    while (s1 != s2) {
        n++;
        y = n;
        s2 = 0;
        for (int i = 0; i < 3; i++) {
            d = y % 10;
            s2 += d;
            y = y/10;
        }
    }
    std::cout << n << '\n';
    return 0;
}
