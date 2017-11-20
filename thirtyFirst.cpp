#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int v[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%1d", &v[i][j]);
        }
    }
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
                if ((v[i][j] - v[i][j - 1] >= 1) && (v[i][j] - v[i][j + 1] >= 1)) {
                    if ((v[i][j] - v[i - 1][j] >= 1) && (v[i][j] - v[i + 1][j]) >= 1) {
                        v[i][j] = 88;
                    }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i][j] > 9) {
                std::cout << char(v[i][j]);
            }
            else
                std::cout << v[i][j];
        }
        std::cout << '\n';
    }
    return 0;
}
