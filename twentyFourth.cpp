#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    long long B, W, X, Y, Z;
    cin >> t;
    while (t--) {
        long long sum = 0;
        cin >> B >> W;
        cin >> X >> Y >> Z;
        long long m = min(X, Y);
        if (m == X) {
            sum = X * B;
            long long s = (Z * W) + (X * W);
            if (s < (Y * W)) {
                sum += s;
            }
            else
                sum += Y * W;
        }
        else{
            sum = Y * W;
            long long s = (Z * B) + (Y * B);
            if (s < (X * B)) {
                sum += s;
            }
            else
                sum += X * B;
        }
        std::cout << sum << '\n';
    }
    return 0;
}
