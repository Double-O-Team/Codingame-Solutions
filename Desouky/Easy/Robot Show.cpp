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
    cin >> n; cin.ignore();
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b; cin.ignore();
        v[i] = b;
    }
    int mn = *min_element(v.begin() , v.end());
    int mx = *max_element(v.begin() , v.end());
    cout<<max(mx, l-mn);
}
