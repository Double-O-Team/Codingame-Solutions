//https://www.codingame.com/ide/puzzle/may-the-triforce-be-with-you
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
.    *
    ***
   *****
  *     *
 ***   ***
***** *****
*/


void solve(ll n)
{
    ll m = 1, k = n*2-1;
    cout<<'.';
    for(ll j = 0; j<n; j++)
    {
        for(ll i=0; i<k; i++)
        {
            if(j == 0 && i == 0)continue;
            cout<<" ";
        }
        for(ll i=0; i<m; i++)
        {
            cout<<"*";
        }
        puts("");
        m+=2;
        k--;

    }

    /*
  *     *
 ***   ***
***** *****
    */
    m = n-1, k = n*2-1;
    ll idx = 1;
    for(ll j =0; j<n; j++)
    {
        for(ll i =0; i<m; i++)
        {
            cout<<" ";
        }
        for(ll i =0; i<idx; i++)
        {
            cout<<"*";
        }
        for(ll i =0; i<k; i++)
        {
            cout<<" ";
        }
        for(ll i =0; i<idx; i++)
        {
            cout<<"*";
        }
        puts("");
        m--;
        k-=2;
        idx+=2;
    }


}


int main()
{
    int n;
    cin >> n;
    cin.ignore();
    solve(n);
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    // cout << "answer" << endl;
}
/*

*/

