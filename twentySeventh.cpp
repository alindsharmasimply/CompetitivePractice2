#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, wrappers;
    cin >> t;
    int n, c, m, sum;
    while (t--) {
        sum = 0;
        cin >> n >> c >> m;
        wrappers = n/c;
        sum = wrappers;
        while(wrappers >= m)
        {
            wrappers = wrappers - m;
            sum++;
            wrappers++;
        }
        std::cout << sum << '\n';
    }
    return 0;
}
