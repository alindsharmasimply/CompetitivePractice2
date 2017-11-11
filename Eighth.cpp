#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int x, k, f;
    while (n--) {
            f = 1;
            cin >> x >> k;
            std::vector<int> a(x);
            std::vector<int> b(x);
            for (int j = 0; j < x; j++) {
                cin >> a[j];
            }
            for (int j = 0; j < x; j++) {
                cin >> b[j];
            }
            sort(a.begin(), a.end());
            sort(b.begin(), b.end(), greater<int>());
            for (int i = 0; i < x; i++) {
                if (a[i] + b[i] >= k) {
                    continue;
                }
                else{
                    f = 0;
                    break;
                }
            }
            if(f == 1)
            std::cout << "YES" << '\n';
            else
            std::cout << "NO" << '\n';
    }
    return 0;
}
