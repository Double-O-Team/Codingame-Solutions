//https://www.codingame.com/ide/puzzle/horse-racing-hyperduals
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<pair<ll,ll>>v1;
map<ll,ll> value;
ll solve(pair<ll,ll>p1,pair<ll,ll>p2,ll i , ll j)
{
    if(p1.first == p2.first &&  p1.second == p2.second && i != j) return 0;
    if(p1.first == p2.first &&  p1.second == p2.second) return INT_MAX;
    ll value = (abs(p2.first - p1.first) + abs(p2.second - p1.second));
    return value;

}

int main()
{
    ll mn = INT_MAX;
    ll n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        ll v;
        ll e;
        cin >> v >> e;
        cin.ignore();
        v1.push_back({v,e});
    }
   // puts("");
   // for(auto it:v1) cout<<it.first<<" "<<it.second<<"\n";
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            ll res = solve(v1[i],v1[j],i,j) ;
          // cout<<"->"<<res<<"\n";
            value[res]++;
            mn = min(res,mn);

        }
    }
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    if(mn != INT_MAX)
    cout << mn << endl;
    else cout << 0 << endl;
   // for(auto it:value)
   // {
   ///     cout<<it.first<<" "<<it.second<<"\n";
    //}
}
/*
20
6674593 4618437
7691515 3514840
1665342 2672663
6201289 5631166
3677291 9945095
4361 1512462
5874765 2505387
7215528 1291399
787560 1660077
5381878 9931494
4933424 7915213
1702132 4831249
764174 8635501
6682870 4280909
1332040 5130005
8112820 2404884
1077590 6220969
5025490 1304552
8931210 8009975
6674593 4618437
*/
