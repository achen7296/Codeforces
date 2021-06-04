#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    int n;
    cin >> n;
    int evenbad = 0, oddbad = 0;
    for (int i = 0; i < n; i ++){
        int l;
        cin >> l;
        for (int j = 0; j < l; j++){
            int ele;
            cin >> ele;
            v.push_back(ele);
        }
        for (int e = 0; e < v.size(); e++){
            int indexp = e % 2;
            if ((v[e] % 2) == indexp){
                continue;
            }else{
                if (indexp == 0){
                    evenbad += 1;
                }else{
                    oddbad += 1;
                }
            }
        }
        if (evenbad == oddbad){
            cout << evenbad << "\n";
        }else{
            cout << -1 << "\n";
        }
        evenbad = 0;
        oddbad = 0;
        v.clear();
    }
    return 0;
}