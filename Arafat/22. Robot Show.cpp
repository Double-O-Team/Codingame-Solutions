//https://www.codingame.com/ide/puzzle/robot-show
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll l;
    cin >> l;
    cin.ignore();
    //cout<<l<<"\n";
    ll n;
    cin >> n;
    cin.ignore();
    //cout<<n<<"\n";
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        cin.ignore();
       // cout<<b<<" ";
    }
    sort(arr,arr+n);
    ll res = max(l - arr[0],arr[n-1]);
    cout<<res;
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

}
/*
20
7
1 2 20 7 6 10 14
*/
