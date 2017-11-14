#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long int n;
    string s;
    cin >> s;
    cin >> n;
    std::cout << (
        ((n/s.size()) * count(s.begin(), s.end(), 'a')) + count(s.begin(), s.begin() + (n%s.size()), 'a')
    );
    return 0;
}
