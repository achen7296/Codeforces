#include <iostream>
using namespace std;

int main(){
    int b, d, w, count = 1, total = 0;
    cin >> b;
    cin >> d;
    cin >> w;
    for (int i = 0; i < w; i++){
        total = total + (b * count);
        count += 1;
    }
    if (total > d){
        cout << total - d; 
    }else{
        cout << 0;
    }
    return 0;
}