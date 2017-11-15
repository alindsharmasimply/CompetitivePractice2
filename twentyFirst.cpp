#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int H, W, sum = 0, max;
    cin >> H >> W;
    vector<vector<int> > a(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < H; i++) {
        max = -1;
        for (int j = 0; j < W; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                ir = j;
            }
        }
        sum += 2 * max;
    }
    for (int i = 0; i < W; i++) {
        max = -1;
        for (int j = 0; j < H; j++) {
            if (a[j][i] > max)
            {
                max = a[j][i];
            }
        }
        sum += 2 * max;
    }
    sum += 2 * (H * W);
    std::cout << sum << '\n';
    return 0;
}
