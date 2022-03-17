//https://www.codingame.com/ide/puzzle/temperatures
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
    // Write C++ code here
    //cout << "Hello world!";
     int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    ll diff = INT_MAX;
    ll idx = -1;
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();
        ll temp_diff = abs(t - 0);
        if(temp_diff < diff)
        {
            diff = temp_diff;
            idx = t;
        }
        else if(temp_diff == diff)
        {
            if(idx < 0) idx = t;
        }
    }

 if(idx == -1)cout << 0<< endl;
 else cout << idx<< endl;
    return 0;
}
