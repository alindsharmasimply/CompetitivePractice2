#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, p;
    cin >> n;
    cin >> p;
    int g;
    if ((n/2) - (p/2) > p/2) {
        g = p/2;
    }
    else
        g = (n/2) - (p/2);
    std::cout << g << '\n';
    return 0;
}
