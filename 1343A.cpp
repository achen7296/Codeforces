#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int pos = 0;
    while ((pos = s.find("WUB")) != std::string::npos){
        s.replace(pos, 3, " ");
    }
    cout << s;
    return 0;
}