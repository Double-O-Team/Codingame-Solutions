#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n; cin.ignore();
    priority_queue<int , vector<int> , greater<int>>pq;

    int mn = INT_MAX;

    for (int i = 0; i < n; i++) {
        int x;cin >> x; cin.ignore();
        pq.emplace(x);
        mn = min(mn, x);
    }


    int ans = 0;
    bool flag = 1;
    while(pq.size()>1){
        int one = pq.top();pq.pop();
        int two = pq.top();pq.pop();
        ans += one+two;
        pq.push(one+two);
    }
    cout<<ans;

}
