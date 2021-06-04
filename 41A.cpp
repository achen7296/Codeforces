#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    string t;
    cin >> s;
    cin >> t;
    reverse(t.begin(), t.end());
    if (s == t){
        cout << "YES";
    }else{
        cout << "NO";
    }
}