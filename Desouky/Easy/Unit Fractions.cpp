#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    ll n;
    cin >> n; cin.ignore();
    for(ll x = n+1; x<=2*n+1; x++){
        ll Y, X = x;
        if( ((n*1ll*x) % (x-n) == 0)){
            Y = (n*1ll*x) / (x-n); 
            cout<<1<<"/"<<n<<" = "<<"1/"<<max(X,Y)<<" + "<<"1/"<<min(X,Y)<<"\n";
        }    

        
    }

}
