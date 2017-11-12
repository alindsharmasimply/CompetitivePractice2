#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k;
    int sum = 0;
    cin >> n >> k;
    std::vector<int> v(k);
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        v[a[i] % 3]++;
    }
    sum += (v[0] * (v[0] - 1))/2;
    for(int i=1; i<=k/2 && i!=k-i; i++){
         sum += v[i] * v[k-i];
     }
    if(k%2==0)
        sum += (v[k/2] * (v[k/2]-1))/2;
    std::cout << sum << '\n';
    return 0;
}
