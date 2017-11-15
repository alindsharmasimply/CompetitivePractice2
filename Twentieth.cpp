#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int H, W, sum = 0;
    cin >> H >> W;
    int a[H][W];
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> a[i][j];
            if (i == 0 || i == (H - 1)) {
                if (j == 0 || j == (W - 1)) {
                    sum += 2 * a[i][j];
                }
                else
                    sum += a[i][j];
            }
            else{
                if(j == 0 || j == (W - 1))
                    sum += a[i][j];
            }
        }
    }
    sum += 2 * (H * W);
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W - 1; j++) {
            if (i == 0 || i == (H - 1)) {
                sum += a[i][j + 1] - a[i][j];
            }
            else{
                sum += abs(a[i - 1][j] - a[i][j]);
                sum += abs(a[i + 1][j] - a[i][j]);
                sum += a[i][j + 1] - a[i][j];
                if (j == (W - 2)) {
                    sum += abs(a[i - 1][j + 1] - a[i][j + 1]);
                    sum += abs(a[i + 1][j + 1] - a[i][j + 1]);
                }
            }
        }
    }
    std::cout << sum << '\n';
    return 0;
}
