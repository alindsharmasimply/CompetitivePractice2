#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k;
    long min = 1000000000;
    cin >> n;
    cin >> k;
    std::vector<long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n - k + 1; i++) {
        if (v[k + i - 1] - v[i] < min) {
            min = v[k + i - 1] - v[i];
        }
    }
    std::cout << min << '\n';
    return 0;
}
