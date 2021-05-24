#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    string s; 
    cin >> n;
    int count = 0;
    int pos = 0;
    int neg = 0;
    for (int i = 0; i < n; i++){
        cin >> s;
        for (int j = 0; j < s.size(); j++){
            if (s.at(j) == '+'){
                pos += 1;
            }
            if (s.at(j) == '-'){
                neg += 1;
            }
        }
        if (pos == 2){
            count += 1;
        } 
        if (neg == 2){
            count -= 1;
        }
        pos = 0;
        neg = 0;
    }
    cout << count;
    return 0;
}