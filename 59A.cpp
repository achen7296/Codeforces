#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    int l = 0, u = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        if (islower(s[i])){
            l++;
        }else{
            u++;
        }
    }
    if (u > l){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s;
    return 0;
}