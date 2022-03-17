//https://www.codingame.com/ide/puzzle/sudoku-validator
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll arr[10][10];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            int n;
            cin >> n;
            cin.ignore();
            arr[i][j] = n;
        }
    }


    for (int i = 0; i < 9; i++)
    {
        map<ll,ll>mp;
        for (int j = 0; j < 9; j++)
        {
            mp[arr[i][j]]++;
        }
        if(mp.size() < 9)
        {
            cout<<"false";
            return 0;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        map<ll,ll>mp;
        for (int j = 0; j < 9; j++)
        {
            mp[arr[j][i]]++;
        }
        if(mp.size() < 9)
        {
            cout<<"false";
            return 0;
        }
    }
    ll row=0;
    for(ll k = 0; row<9; k+=3)
    {
        // cout<<"this->"<<k<<" ---- "<<row<<"\n";
        if(k == 9 && row == 6)break;
        if (k == 9) k = 0,row+=3;
        map<ll,ll>mp;
        for (int i = row; i < (row+3); i++)
        {
            for (int j = k; j < (k+3); j++)
            {
                mp[arr[i][j]]++;
                //cout<<arr[i][j]<<" ";
            }
            //   cout<<"\n";

        }
        if(mp.size() < 9)
        {
            cout<<"false";
            return 0;
        }
        // cout<<"\n\n";

    }
    cout<<"true";
}
/*

*/
