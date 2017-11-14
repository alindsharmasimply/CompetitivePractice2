#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, x;
    int sum = 0;
    int count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
        if (sum % 2 == 1) {
            count += 2;
        }
    }
    if (sum % 2 == 1) {
        std::cout << "NO" << '\n';
    }
    else
        std::cout << count << '\n';
    return 0;
}
