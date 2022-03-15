#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;



int main()
{
    int l;
    cin >> l; cin.ignore();
    int n;
    int mx=0;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b; cin.ignore();
        mx=max(l-b,max(b,mx));
    }
    
   

    cout << mx << endl;
}
