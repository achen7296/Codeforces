#include <iostream>
#include <vector>
using namespace std;

int helper(vector <int> arr){
    if (arr.size() == 1){
        return 1;
    }

    if (arr.size() == 0){
        return 0;
    }

    int ptr = arr[0];
    int count = 1;
    for (int i = 1; i < arr.size(); i++){
        if (ptr != arr[i]){
            count += 1;
            ptr = arr[i];
        }
    }
    return count;
}

int main(){
    int t, m, out;
    cin >> t;
    vector <int> mags; 
    for (int i = 0; i < t; i++){
        cin >> m;
        mags.push_back(m);
    }
    cout << helper(mags);
}