#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    while(n--)
    {
        int k = 0;
        string s1, s2;
        cin >> s1 >> s2;
        for (int i = 0; i < s1.length(); i++) {
            for (int j = 0; j < s2.length(); j++) {
                if (s1[i] == s2[j]) {
                    k = 1;
                    std::cout << "YES" << '\n';
                    break;
                }
            }
            if (k == 1) {
                break;
            }
        }
        if (k == 0) {
            std::cout << "NO" << '\n';
        }
    }
    return 0;
}
