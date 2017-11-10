#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, s1, s2, x, sum;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        sum = 0;
        if (s.length() % 2 == 0) {
            std::vector<int> s1(26);
            std::vector<int> s2(26);
            for (int j = 0; j < s.length()/2; j++) {
                s1[int(s[j]) - int('a')]++;
                s2[int(s[s.length()/2 + j]) - int('a')]++;
            }
            for (int k = 0; k < 26; k++) {
                if (s1[k] > s2[k]) {
                    sum += s1[k] - s2[k];
                }
            }
            std::cout << sum << '\n';
        }
        else
            std::cout << -1 << '\n';
    }
    return 0;
}
