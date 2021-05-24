#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    string out;
    for (int i = 0; i < s.size(); i++){
        if (i == 0){
            out += toupper(s.at(i));
        }
        else{
            out += s.at(i);
        }
    }
    cout << out;
}