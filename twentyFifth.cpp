#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin >> s;
    double gg = sqrt(s.length());
    int g = sqrt(s.length());
    int h;
    if (gg > g) {
        h = g + 1;
        if (g * h < s.length()) {
            g = g + 1;
        }
    }
    else if (gg == g) {
        h = g;
    }
    char arr[g][h];
    int k = 0;
    for (int i = 0; i < g; i++) {
        for (int j = 0; j < h; j++) {
            arr[i][j] = s[k];
            k++;
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < g; j++) {
            if(arr[j][i])
            std::cout << arr[j][i];
        }
        std::cout << ' ';
    }
    return 0;
}
