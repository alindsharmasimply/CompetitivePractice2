#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int count;
    long cc;
    long long a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        count = 0;
        for (long long j = a; j <= b; j++) {
            cc = sqrt(j);
            if (cc * cc == j) {
                count++;
                j += cc * 2;
            }
        }
        std::cout << count << '\n';
    }
    return 0;
}
