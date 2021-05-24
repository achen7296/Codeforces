#include <iostream>
using namespace std;

int compare(string a, string b){
    for (int i = 0; i < a.size(); i++){
        char val1 = tolower(a[i]);
        char val2 = tolower(b[i]);
        if (val1 == val2){
            continue;
        }else if (val1 > val2){
            return 1;
        }else{
            return -1;
        }
    }
    return 0;
}

int main(){
    string a;
    string b;
    cin >> a;
    cin >> b;
    cout << compare(a,b);
}