#include <iostream>
using namespace std;

int main(){
    int l;
    string s;
    cin >> l;
    cin >> s;
    char temp = s[0];
    int count = 0;
    int out = 0;
    for (int i = 1; i < l; i++){
        if (temp == s[i]){
            out += 1;
        }else{
            temp = s[i];
            if (out < count){
                out = count;
            }
            count = 0;
        }
    }
    cout << out;
    return 0;
}