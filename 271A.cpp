#include <iostream>
#include <unordered_map>
using namespace std;

bool distinct(int year){
    string s  = to_string(year);
    unordered_map <char, int> m;
    for (int i = 0; i < s.size(); i++){
        if (m.find(s[i]) == m.end()){
            m[s[i]] = 1;
        }else{
            return false;
        }
    }
    return true;
}


int main(){
    int y;
    cin >> y;
    bool d = false;
    while (d == false){
        y = y + 1;
        d = distinct(y);
    }
    cout << y;
    return 0;
}