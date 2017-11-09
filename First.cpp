#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, x;
    cin >> n;
    string s, s1;
    cin >> s;
    int k;
    cin >> k;
    k = k % 26;
    char ch;
    for (int i = 0; i < n; i++) {
        ch = s[i];
        if ((int(ch) >= 97 && int(ch) <= 122) || (int(ch) >= 65 && int(ch) <= 90)) {
            x = int(ch) + k;
           if (x > 122) {
               x = x - 122 + 96;
           }
           if (x > 90 && (int(ch) >= 65 && int(ch) <= 90)) {
               x = x - 90 + 64;
           }
           s1 = s1 + char(x);
       }
       else
       {
           s1 = s1 + ch;
       }
   }
   std::cout << s1 << '\n';
    return 0;
}
