//https://www.codingame.com/ide/puzzle/lumen
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char c[26][26];
ll arr[26][26];
ll n;

void solve(ll x, ll y, ll L)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(abs(i-x) < L && abs(j-y) < L)
            {
                arr[i][j] = 1;
            }
        }
    }
}
int main()
{
  // init();
    cin >> n;
    cin.ignore();
    ll l;
    cin >> l;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char cell;
            cin >> cell;
            cin.ignore();
            c[i][j] = cell;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(c[i][j] == 'C')
            {
                solve(i,j,l);
            }
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
//            cout<<arr[i][j]<<" ";
                if(arr[i][j] == 0) cnt++;
        }
       // puts("");
    }
    cout<<cnt;
}
/*

*/
