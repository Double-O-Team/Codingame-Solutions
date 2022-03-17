#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>


using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    cin >> n; cin.ignore();
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        int pi;
        cin >> pi; cin.ignore();
        v[i] = pi;
    }
    sort(v.begin() , v.end());
    int ans = INT_MAX;
    for(int x = 1; x<n; x++){
        ans = min(ans, abs(v[x]- v[x-1]));
    }

    cout<<ans;
}
