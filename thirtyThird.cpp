#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int n, m, total = 0, team = 0;
    int maximum = 0;
    cin >> n >> m;
    std::vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = 0; k < m; k++) {
                if(v[i][k] == '1' || v[j][k] == '1')
                {
                    total++;
                }
            }
            if (total > maximum) {
                maximum = total;
                team = 1;
            }
            else if (total == maximum) {
                team++;
            }
            total = 0;
        }
    }
    std::cout << maximum << '\n';
    std::cout << team << '\n';
    return 0;
}
