#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int level = 0;
    int valley = 0;
    string s;
    cin >> n;
    cin >> s;
    char ch;
    for (int i = 0; i < n; i++) {
        ch = s[i];
        if (ch == 'U') {
            level++;
        }
        if (ch == 'D') {
            level--;
        }
        if (level == -1 && ch == 'D') {
            valley++;
        }
    }
    std::cout << valley << '\n';
    return 0;
}
