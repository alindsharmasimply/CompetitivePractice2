#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;


int main() {
    int n, min = 1000000;
    cin >> n;
    int f = 0;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] == v[j]) {
                f = 1;
                if (abs(i - j) < min) {
                    min = abs(i - j);
                }
            }
        }
    }
    if (f == 1)
    std::cout << min << '\n';
    else
    std::cout << -1 << '\n';
    return 0;
}
