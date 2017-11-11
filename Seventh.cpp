#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    multimap<int, int> m;
    for (int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;
        m.insert(make_pair(a + b, i));
    }
    for(multimap<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        std::cout << it->second << ' ';
    }
    return 0;
}
