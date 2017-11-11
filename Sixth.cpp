#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    std::vector<int> v(n);
    std::vector<int> w(n);
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v[i] = a + b;
        w[i] = a + b;
    }
    sort(w.begin(), w.end());
    std::vector<int> x(w[n - 1]);
    for (int i = 0; i < n; i++) {
        x[w[i]] = i + 1;
    }
    for (int i = 0; i < n; i++) {
        cout << x[v[i]] << ' ';
    }
    return 0;
}
