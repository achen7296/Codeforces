#include <iostream>
#include <set>
#include <string>
using namespace std;

bool isVowel(char ch)
{
    ch = toupper(ch);
    return (ch=='A' || ch=='E' || ch=='I' ||
                       ch=='O' || ch=='U' || ch=='Y');
}

int main() {
    string s;
    cin >> s;
    string out;
    for (int i = 0; i < s.size(); i++){
        if (isVowel(s[i])){
            continue;
        }else if (isupper(s[i])){
            out = out + '.' + (char) tolower(s[i]);
        }else{
            out = out + '.' + s[i];
        }
    }
    cout << out;
}