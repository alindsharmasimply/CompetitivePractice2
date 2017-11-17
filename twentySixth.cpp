#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, d;
    int count = 0;
    int f;
    cin >> n >> d;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        f = 0;
        for (int j = i + 1; j < n; j++) {
            if (v[i] + d == v[j]) {
                f++;
            }
            if (v[i] + (2*d) == v[j]) {
                f++;
            }
        }
        if (f == 2) {
            count++;
        }
    }
    std::cout << count << '\n';
    return 0;
}
