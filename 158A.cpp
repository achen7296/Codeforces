#include <iostream>
using namespace std;

int main(){
    int out = 0;
    int n, k;
    cin >> n >> k;
    int p[n];
    for (int i = 0; i < n; i++){
        int score;
        cin >> score;
        p[i] = score;
    }

    int foo = p[k-1];
    for (int j = 0; j < n; j++){
        if (p[j] >= foo && p[j] > 0){
            out += 1;
        }
    }
    cout << out;
}