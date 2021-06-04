#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a;
    cin >> b;
    int hours = 0;
    hours += a;

    int n = a;
    while (n/b >= 1){
        hours += 1;
        n = n - b;
        n += 1;
    }

    cout << hours;
    return 0; 
}