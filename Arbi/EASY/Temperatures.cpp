#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    
    int minimum = 1e4;
    int ans = 0;
    map<int , int> frequency;
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();
        if(abs(t) < minimum){
         minimum = abs(t);
        }
        ++frequency[t];
    }
    if(minimum == 1e4)minimum = 0;
    if(frequency[minimum] > 0 and frequency[-minimum] > 0) {
        cout << minimum << '\n';
    } else if(frequency[minimum] > 0) {
        cout << minimum << '\n';
    } else {
        cout << -minimum << '\n';
    }
}
