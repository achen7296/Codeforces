#include <iostream>
#include <unordered_map>
using namespace std;

int getValue(unordered_map<int,int>map, int key){
    if (map.find(key) != map.end()){
        return map.at(key);
    }else{
        return 0;
    }
}
 
int main(){
    unordered_map<int, int> m;
    int n, g;
    cin >> n;
    int out = 0;
    for (int i = 0; i < n; i++){
        cin >> g;
        if (m.find(g) == m.end()){
            m[g] = 1;
        }else{
            m[g]++;
        }
    }
    out += getValue(m,4);
    int oneFreq = getValue(m,1);
    int twoFreq = getValue(m,2);
    int threeFreq = getValue(m,3);
    int rem = 0;

    if (oneFreq == threeFreq){
        out += oneFreq;
    }
    if (oneFreq > threeFreq){
        out += threeFreq;
        rem = oneFreq - threeFreq;
    }else if (threeFreq > oneFreq){
        out += oneFreq;
        out += threeFreq - oneFreq;
    }
    if (twoFreq % 2 == 0){
        out += twoFreq/2;
    }else{
        out += int(twoFreq/2) + 1;
        if (rem >= 2){
            rem = rem - 2;
        }
        if (rem == 1){
            rem = rem - 1;
        }
    }
    if (rem != 0){
        if (rem % 4 == 0){
            out += int(rem/4);
        }else{
            out += int(rem/4) + 1;
        }
    }
    cout << out;
    return 0;
}