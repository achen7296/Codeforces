#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double n;
    double m;
    double a;
    cin >> n;
    cin >> m;
    cin >> a;

    long long foo1 = ceil(n/a);

    long long foo2 = ceil(m/a);

    long long out = foo1 * foo2;

    cout << out;
}