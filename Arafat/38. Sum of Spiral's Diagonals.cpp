//https://www.codingame.com/ide/puzzle/sum-of-spirals-diagonals
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(ll n,ll s){
    if(n==1) return s;
    else if(n==0) return 0;
    else
    {
        ll sum = 4*s+(n-1)*6;
        ll snew = s+4*(n-1);
        ll nnew = n-2;
        return sum + solve(nnew,snew);
    }
}

int main()
{
    ll n;
    cin >> n; cin.ignore();
    ll res =solve(n,1);
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << res << endl;
}

/*

*/
