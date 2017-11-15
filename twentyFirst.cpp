#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int H, W, sum = 0, sum1 = 0, sum2 = 0, max;
    int ir, ic;
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
        int k = ir + 1;
        while (k != W - 1) {
            sum1 += abs(a[i][k] - a[i][k - 1]);
            if (a[i][k] == max) {
                sum += sum1;
            }
            k++;
        }
        sum1 = 0;
    }
    for (int i = 0; i < W; i++) {
        max = -1;
        for (int j = 0; j < H; j++) {
            if (a[j][i] > max)
            {
                max = a[j][i];
                ic = i;
            }
        }
        sum += 2 * max;
        int l = ic + 1;
        while (l != H - 1) {
            sum2 += abs(a[l][i] - a[l - 1][i]);
            if (a[l][i] == max) {
                sum += sum2;
            }
            l++;
        }
        sum2 = 0;
    }
    sum += 2 * (H * W);
    std::cout << sum << '\n';
    return 0;
}
