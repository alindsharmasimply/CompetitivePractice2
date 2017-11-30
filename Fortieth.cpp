#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin >> R >> C;
        string s[R];
        for (int i = 0; i < R; i++) {
            cin >> s[i];
        }
        int r, c;
        cin >> r >> c;
        string s1[r];
        for (int i = 0; i < r; i++) {
            cin >> s1[i];
        }
        for (int i = 0; i < R; i++) {
            int count = 0;
            int x = i;
                if(s[i].find(s1[0]) == 1)
                {
                    count++;
                    for (int j = 1; j < r; j++) {
                        x++;
                        if(s[x].find(s1[j]) == 1)
                        {
                            count++;
                        }
                    }
                }
                if (count == r) {
                    cout << "YES" << '\n';
                    break;
                }
        }
        if (count < r) {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
