//https://www.codingame.com/ide/puzzle/credit-card-verifier-luhns-algorithm
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool solve(string str)
{
    ll cnt = 1;
    ll sum1 = 0,sum2 = 0;
    for(ll i = str.size()-1; i>=0; i--)
    {
        if(str[i] == ' ') continue;

        if(cnt & 1)
        {
            sum2+= str[i] - '0';
        }
        else
        {
            ll x = str[i] - '0';
             x *= 2;
            ll res=0;
            while(x > 0)
            {
                ll digit = x % 10;
                res+=digit;
                x /= 10;
            }
            sum1 += res;
        }
        cnt++;
    }
   // cout<<sum1<<"->>"<<sum2;
   ll f = sum1+sum2;
   if(f % 10 == 0) cout<<"YES\n";
   else cout<<"NO\n";
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string card;
        getline(cin, card);
        solve(card);
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    //cout << "YES or NO" << endl;
}

/*

*/
