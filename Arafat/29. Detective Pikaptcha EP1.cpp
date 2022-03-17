//https://www.codingame.com/ide/puzzle/detective-pikaptcha-ep1
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char arr[101][101];
/*
5 3
0000#
#0#00
00#0#
*/
void solve(ll w,ll h)
{
    for (ll i = 0; i < h ; i++)
    {
        for (ll j = 0; j < w; j++)
        {
            ll cnt = 0;
            if(arr[i][j] != '#')
            {
                if(i != 0)
                {
                    if(arr[i-1][j] != '#') cnt++;

                }
                if(j != 0)
                {
                    if(arr[i][j-1] != '#') cnt++;

                }
                if(j != (w-1))
                {
                    if(arr[i][j+1] != '#') cnt++;
                }
                if(i != (h-1))
                {
                    if(arr[i+1][j] != '#') cnt++;
                }
            }
            if(arr[i][j] != '#'){
            string s = to_string(cnt);
            arr[i][j] = s[0];}
        }
    }
}

int main()
{
    ll w;
    ll h;
    cin >> w >> h;
    //cout<<w<<" "<<h<<"\n";
    cin.ignore();
    //char arr[w][h];

        for (ll j = 0; j < h; j++)
        {
            string temp;
            cin>>temp;
            cin.ignore();
            for(ll k =0;k<temp.size();k++)
            {
                arr[j][k] = temp[k];
                 //cout<<arr[j][k]<<" ";
            }

      // puts("");
        }


    solve(w,h);
    for (ll i = 0; i < h; i++)
    {
        for (ll j = 0; j < w; j++)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
}
/*

*/

