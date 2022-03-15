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
    multiset<long long> has;
    for (int i = 0; i < n; i++) {
        long long  x;
        cin >> x; cin.ignore();
        has.insert(x);
    }
    long long ans = 0;
    while(has.size() > 1){
        auto tp = *has.begin();
        has.erase(has.find(tp));
        auto tpp = *has.begin();
        has.erase(has.find(tpp));
        ans += (tp + tpp);
        has.insert(tp + tpp);
    }
    //if(!has.empty())ans += (*has.begin());
    cout << ans << endl;
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    //cout << "0" << endl;
}
