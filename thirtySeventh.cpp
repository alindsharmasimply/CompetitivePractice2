#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, sum = 0;
    string s1;
    string s2;
    cin >> s1 >> s2;
    cin >> n;
    for (int i = 0; i < min(s1.length(), s2.length()); i++) {
        if (s1[i] == s2[i]) {
            continue;
        }
        else
        {
            sum = s1.length() - i + s2.length() - i;
            break;
        }
    }
    if (sum <= n) {
        std::cout << "Yes" << '\n';
    }
    else
        std::cout << "No" << '\n';
    return 0;
}
