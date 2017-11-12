#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s, n, m;
    int money = -1;
    cin >> s >> n >> m;
    std::vector<int> keyboard(n);
    std::vector<int> usb(m);
    for (int i = 0; i < n; i++) {
        cin >> keyboard[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> usb[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (keyboard[i] + usb[j] > s) {
                continue;
            }
            else if(keyboard[i] + usb[j] > money)
            {
                money = keyboard[i] + usb[j];
                break;
            }
        }
    }
    std::cout << money << '\n';
    return 0;
}
