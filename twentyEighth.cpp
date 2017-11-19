#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int dd1, mm1, yy1;
    int dd2, mm2, yy2;
    cin >> dd1 >> mm1 >> yy1;
    cin >> dd2 >> mm2 >> yy2;
    if (yy1 - yy2 > 0) {
        std::cout << 10000 << '\n';
    }
    else if(yy1 - yy2 == 0)
    {
        if (mm1 - mm2 > 0) {
            cout << 500 * (mm1 - mm2);
        }
        else if(mm1 - mm2 == 0)
        {
            if (dd1 - dd2 > 0) {
                cout << 15 * (dd1 - dd2);
            }
            else
                cout << 0;
        }
        else
            cout << 0;
    }
    else
        cout << 0;
    return 0;
}
