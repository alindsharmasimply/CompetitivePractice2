#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, n, f;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector < vector<char> > ch(n,vector<char>(n));
        f = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        s.copy(&ch[i][0], n);
        sort(ch[i].begin(), ch[i].end());
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (ch[j][i] > ch[j + 1][i]) {
                f = 1;
                break;
            }
        }
        if (f == 1) {
            break;
        }
    }
        if (f == 1)
        std::cout << "NO" << '\n';
        else
        std::cout << "YES" << '\n';
}
return 0;
}
