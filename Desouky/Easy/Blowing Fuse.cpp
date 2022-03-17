#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    int m;
    int c;
    cin >> n >> m >> c; cin.ignore();
    vector<int>v(n);

    for (int i = 0; i < n; i++) {
        int nx;
        cin >> nx; cin.ignore();
        v[i] = nx;
    }
    int maxVal = 0;
    int currentVal = 0;
    vector<bool>toggled(n , 0);
    for (int i = 0; i < m; i++) {
        int mx;
        cin >> mx; cin.ignore();
        toggled[mx-1] = !toggled[mx-1];
        if(toggled[mx-1])currentVal += v[mx-1];
        else currentVal -= v[mx-1];
        maxVal = max(maxVal, currentVal);
    }
    if(maxVal > c)cout << "Fuse was blown." << endl;
    else{
        cout << "Fuse was not blown." << endl;
        cout << "Maximal consumed current was "<<maxVal<< " A." << endl;
    }

    

    
   
}
