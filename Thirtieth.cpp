#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, g, undi_count, f;
    cin >> g;
    string s;
    while(g--) {
        undi_count = 0;
        f = 0;
        std::vector<int> v(26);
        cin >> n;
        cin >> s;
        for (int j = 0; j < n; j++) {
            if (s[j] >= 'A' && s[j] <= 'Z') {
                v[int(s[j]) - 65]++;
            }
            if (s[j] == '_') {
                undi_count++;
            }
        }
        if(undi_count >= 1)
        for (int i = 0; i < 26; i++) {
            if (v[i] == 1) {
                f = 1;
                break;
            }
        }
        else
        {
            if (s[0] == s[1]) {
                for (int j = 1; j < (n - 1); j++) {
                    if ((s[j] == s[j - 1]) || (s[j] == s[j + 1])) {
                        continue;
                    }
                    else
                    {
                        f = 1;
                        break;
                    }
                }
                if (s[n - 1] != s[n - 2]) {
                    f = 1;
                }
            }
            else
            f = 1;
        }
        if (f == 0) {
            cout << "YES" << "\n";
        }
        else
        std::cout << "NO" << '\n';
    }
    return 0;
}
