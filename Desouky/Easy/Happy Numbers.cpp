#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(string s){
    ll ret = 0;
    for(auto it: s){
        ret += (it-'0') * (it-'0');
    }
    return ret;
}

ll run(ll num){
    ll ret = 0;
    while(num){
        ret += (num%10)*(num%10);
        num/= 10;
    }
    return ret;
}

int main()
{
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        string s; getline(cin, s);
        ll number = solve(s);
        bool flag = false;
        for(int x = 0; x<100; x++){
            number = run(number);
        }
         if(number == 1) cout<<s<<" :)\n";
         else cout<<s<<" :(\n";
    }
}
