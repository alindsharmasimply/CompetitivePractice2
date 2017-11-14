#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, x;
    int maximum = 0;
    cin >> n;
    std::vector<int> v(100);
    for (int i = 0; i < n; i++) {
        cin >> x;
        v[x]++;
    }
    for (int i = 1; i < n; i++) {
        if (v[i - 1] + v[i] > maximum) {
            maximum = v[i - 1] + v[i];
        }
    }
    std::cout << maximum << '\n';
    return 0;
}
