#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    long long p, q;
    int f = 0;
    cin >> p >> q;
    for (long long i = p; i <= q; i++) {
        long long summ;
        long long a = 0;
        long long k = i;
        while (k > 0) {
            k /= 10;
            ++a;
        }
        long long p = i * i;
        long long g = pow(10, a);
        summ = p%g + p/g;
        if (summ == i) {
            cout << summ << " ";
            f++;
        }
    }
    if (f == 0) {
        std::cout << "INVALID RANGE" << '\n';
    }
    return 0;
}
