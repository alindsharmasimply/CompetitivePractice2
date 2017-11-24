#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin >> s;
    int even = 0, odd = 0;
    std::vector<int> v(26);
    for (int i = 0; i < s.length(); i++) {
        v[int(s[i]) - 97]++;
    }
    for (int i = 0; i < 26; i++) {
        if (v[i] % 2 == 0) {
            even++;
        }
        else
            odd++;
    }
    if (odd <= 1) {
        std::cout << "YES" << '\n';
    }
    else
        std::cout << "NO" << '\n';
    return 0;
}
