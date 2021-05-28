#include <iostream>
#include <string>
using namespace std;

string changeCase(string s){
    for( int i = 0 ; i < s.size() ; i++ ){
            if (islower(s[i])){
                s[i] = toupper(s[i]);
            }else{
                s[i] = tolower(s[i]);
            }
    }
    return s;
}


string caps(string s){
    int first = isupper(s[0]);
    bool upper = true;
    for (int i = 0; i < s.size(); i++){
        if (islower(s[i])){
            upper = false;
        }
    }
    if (upper){
        return changeCase(s);
    }
    if (first == 0){
        for (int j = 1; j < s.size(); j++){
            if (islower(s[j])){
                return s;
            }
        }
        return changeCase(s);
    }else{
        return s;
    }
}

int main(){
    string s;
    cin >> s;
    cout << caps(s);
    return 0;
}