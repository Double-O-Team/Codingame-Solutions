#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll val(pair<ll , ll>p){
    return pow(10,p.second) * pow(5,p.first - p.second);
}

int main()
{
    int r;cin >> r; cin.ignore();
    int sz;cin >> sz; cin.ignore();
    vector<int>v(r);
    for (int i = 0; i < sz; i++) {
        int c;int n;
        cin >> c >> n; cin.ignore();
        sort(v.begin(), v.end());
        int total = val({c,n});
        v[0] += total;
    }
    sort(v.begin(), v.end());
    cout<<v[r-1];
}
