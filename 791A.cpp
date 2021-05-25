#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 0;
    cin >> a;
    cin >> b;
    int count = 0;
    while (a <= b){
        a = a*3;
        b = b*2;
        count += 1;
    }
    cout << count;
    return 0;
}