//https://www.codingame.com/ide/puzzle/the-river-ii-
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(ll n)
{
    ll res = 0, temp = n;
    while(n > 0)
    {
        ll digit = n % 10;
        res += digit;
        n /= 10;
    }
    return (res+temp);
}
int main()
{
    ll r1;
    cin >> r1;
    cin.ignore();

    map<ll,ll>mp;
    ll i =1,j=2;
    while(i<=r1)//483 456
    {
        ll temp;
        temp = solve(i);
        mp[temp]++;
        ll temp1 = solve(j);
        mp[temp1]++;
        i++,j++;
    }
//    for(auto &it:mp)
//    {
//        cout<<it.first<<"->"<<it.second<<"\n";
//    }
    if(mp[r1] >= 2) cout<<"YES";
    else
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << "NO" << endl;
}
/*
32
47

47
*/

