//https://www.codingame.com/ide/puzzle/reverse-minesweeper
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char arr[101][101];
/*
..xxxxxx..x.x...
.xx...xxx....xxx
x.xxxx.xxx...xxx
xxxxxxxxxx..xxxx
...xx..x..xxxx..
xx.xx.xxxx..x...
xxxxxx.....x..xx
xx......xxx..xxx
xxxxxxxxxxxxxxxx
xxx.xxx......xx.
........xxxxxxxx





................
................
................
................
....1...........
...1x1..........
....1...........
................
................

*/
char solve2(char c,ll i, ll j)
{
    ll cnt;
    if(c == '.') cnt = 0;
    else
    {
        cnt = c - '0';
    }
    cnt++;
    string str = to_string(cnt);
    return str[0];
}
void solve(ll w,ll h)
{
    for (ll i = 0; i < h ; i++)
    {
        for (ll j = 0; j < w; j++)
        {

            if(arr[i][j] == 'x')
            {
                if(i != 0)
                {
                    if(arr[i-1][j] != 'x') arr[i-1][j] = solve2(arr[i-1][j],i,j);

                    if(arr[i-1][j+1] != 'x') arr[i-1][j+1] = solve2(arr[i-1][j+1],i,j);

                    if(arr[i-1][j-1] != 'x') arr[i-1][j-1] = solve2(arr[i-1][j-1],i,j);

                }
                if(j != 0)
                {
                    if(arr[i][j-1] != 'x') arr[i][j-1] = solve2(arr[i][j-1],i,j);

                }
                if(j != (w-1))
                {
                    if(arr[i][j+1] != 'x') arr[i][j+1] = solve2(arr[i][j+1],i,j);
                }
                if(i != (h-1))
                {
                    if(arr[i+1][j] != 'x') arr[i+1][j] = solve2(arr[i+1][j],i,j);

                    if(arr[i+1][j+1] != 'x') arr[i+1][j+1] = solve2(arr[i+1][j+1],i,j);

                    if(arr[i+1][j-1] != 'x') arr[i+1][j-1] = solve2(arr[i+1][j-1],i,j);
                }
            }
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
        for(ll k =0; k<temp.size(); k++)
        {
            arr[j][k] = temp[k];
            //cout<<arr[j][k]<<" ";
        }

        // puts("");
    }

    //puts("");
    solve(w,h);
    for (ll i = 0; i < h; i++)
    {
        for (ll j = 0; j < w; j++)
        {
            if(arr[i][j] == 'x')arr[i][j] = '.';
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
}
/*

*/

