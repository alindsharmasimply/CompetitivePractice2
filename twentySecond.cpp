#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, n;
    int a, b;
    cin >> t;
    while (t--) {
        int sum = 0;
        cin >> n;
        cin >> a;
        cin >> b;
        int first = (n - 1) * min(a , b);
        std::cout << first << ' ';
        while (sum + first < (n - 1) * max(a , b)) {
            sum += abs(b - a);
            std::cout << sum + first << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}
