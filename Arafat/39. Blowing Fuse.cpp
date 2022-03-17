//https://www.codingame.com/ide/puzzle/blowing-fuse
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    ll m;
    ll c;
    cin >> n >> m >> c;
    cin.ignore();
    map<ll,pair<ll,ll>> IsTurned;
    ll MAX = INT_MIN, cur = 0;
    for (ll i = 0; i < n; i++)
    {
        ll nx;
        cin >> nx;
        cin.ignore();
        IsTurned[i+1] = {nx,0};
    }
    for (ll i = 0; i < m; i++)
    {
        ll mx;
        cin >> mx;
        cin.ignore();
        if(IsTurned[mx].second == 0)
        {
            //  cout<<"here";
            IsTurned[mx].second = 1;
            cur += IsTurned[mx].first;
            //cout<<cur<<"\n";
        }
        else
        {
            IsTurned[mx].second = 0;
            cur -= IsTurned[mx].first;
        }
        // cout<<"cur->"<<cur<<"\n";
        MAX = max(MAX, cur);
        // cout<<"max->"<<mx<<"\n";
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    if(MAX > c) cout << "Fuse was blown." << endl;
    else
    {
        cout << "Fuse was not blown." << endl;
        cout << "Maximal consumed current was "<<MAX<<" A." << endl;
    }
}
