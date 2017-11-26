#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin >> q;
    while(q--) {
        int sum = 0;
        int n;
        cin >> n;
        int v[2*n][2*n];
        int maximum;
        for (int i = 0; i < 2*n; i++) {
            for (int j = 0; j < 2*n; j++) {
                cin >> v[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                maximum = v[i][j];
                if (v[i][2*n - j - 1] > maximum) {
                    maximum = v[i][2*n - j - 1];
                }
                if (v[2*n - i - 1][2*n - j - 1] > maximum) {
                    maximum = v[2*n - i - 1][2*n - j - 1];
                }
                if (v[2*n - i - 1][j] > maximum) {
                    maximum = v[2*n - i - 1][j];
                }
                sum += maximum;
            }
        }
        std::cout << sum << '\n';
    }
    return 0;
}
