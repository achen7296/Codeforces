#include <iostream>
#include <string>
using namespace std;

int main(){
    int l;
    string s;
    cin >> s;
    l=s.size();
    for(int i=0;i<l;i+=2){
        for(int j=0;j<l-i-2;j+=2){
            if(s[j]>s[j+2]){
                swap(s[j],s[j+2]);
            }
        }
    }
    cout << s;
    return 0;
}