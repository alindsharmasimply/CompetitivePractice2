#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, v;
    cin >> v;
    cin >> n;
    std::vector<int> g(n);
    for (int i = 0; i < n; i++) {
        cin >> g[i];
    }
    std::vector<int>::iterator x;
    x = lower_bound(g.begin(), g.end(), v);
    std::cout << (x- g.begin()) << '\n';
    return 0;
}
