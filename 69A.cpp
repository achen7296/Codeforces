#include <iostream>
using namespace std;

int main(){
    int x, y, z, n;
    int xf = 0, yf = 0, zf = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        cin >> y;
        cin >> z;
        xf += x;
        yf += y;
        zf += z;
    }
    if (xf == 0 && yf == 0 && zf == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }
}