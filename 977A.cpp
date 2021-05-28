#include <iostream>
using namespace std;

int main(){
    int n, k;
    int count = 0;
    cin >> n;
    cin >> k;
    while (count != k){
        if (n % 10 != 0){
            n = n - 1;
            count += 1;
        }else{
            n = n/10;
            count += 1;
        }
    }
    cout << n;
    return 0;
}