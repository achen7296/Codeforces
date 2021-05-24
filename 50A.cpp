#include <iostream>
#include <math.h> 
using namespace std;

int main(){
    int m;
    int n;
    cin >> m;
    cin >> n;
    int prod = m*n; 
    if (prod % 2 == 0){
        cout << prod/2;
    }else{
        cout << floor(prod/2);
    }
}