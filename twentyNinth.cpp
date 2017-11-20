#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int m, n, x;
    int maximum = -1;
    cin >> n >> m;
    std::vector<int> v(m);
    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 1; i < m; i++) {
        if (v[i] - v[i - 1] > maximum) {
            maximum = v[i] - v[i - 1];
        }
    }
    if((n - 1) != v[m - 1])
    {
        if ((n - 1) - v[m - 1] >= maximum) {
            std::cout << (n - 1) - v[m - 1] << '\n';
        }
        else
            std::cout << (maximum + 1)/2 << '\n';
    }
    else
        std::cout << (maximum + 1)/2 << '\n';
    return 0;
}
