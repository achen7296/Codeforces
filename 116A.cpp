#include <iostream>
using namespace std;

int main(){
    int n = 0, a = 0, b = 0;
    cin >> n;
    int cap = 0;
    int out = 0;
    for (int i = 0; i < n; i++){
        cin >> a;
        cin >> b;
        cap += b - a;
        if (out < cap){
            out = cap;
        }
    }
    cout << out;
    return 0;
}