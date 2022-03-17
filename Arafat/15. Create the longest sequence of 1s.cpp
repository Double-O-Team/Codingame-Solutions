//https://www.codingame.com/ide/puzzle/create-the-longest-sequence-of-1s
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(string str)
{
    ll cnt = 0, res = INT_MIN;
    for(ll i =0; i<str.size(); i++)
    {
        if(str[i] == '0') cnt = 0;
        else
        {
            cnt++;
            res = max(res,cnt);
        }
    }
    //cout<<res<<" ";
    return res;
}

int main()
{
    string b;
    getline(cin, b);
    cin.ignore();
    ll res = 0;
    for(int i=0; i<b.size(); i++)
    {
        //cout<<i;
        if(b[i] == '0')
        {
            string temp = b;
            temp[i] = '1';
            if(res < solve(temp)) res = solve(temp);
        }

    }

    cout<<res<<"\n";
}
