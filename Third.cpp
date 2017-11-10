#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    int sum = 0, x, z;
    cin >> s;
    std::vector<int> v(26);
    for (int i = 0; i < s.length(); i++) {
        v[s[i] - 'a']++;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < 26; i++) {
        if(v[i] > 0)
        {
            z = i;
            x = v[i];
            break;
    }
}
    for (int i = z; i < 26; i++) {
        sum += v[i] - x;
    }
    if (sum <= 1) {
        std::cout << "YES" << '\n';
    }
    else
        std::cout << "NO" << '\n';
    return 0;
}
