
#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >>d >>e ;
    cout << fixed;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << setprecision(3) << d << endl;
    cout << setprecision(9) << e << endl;
    return 0;
}

