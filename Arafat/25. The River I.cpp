//https://www.codingame.com/ide/puzzle/the-river-i-
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
    ll r2;
    cin >> r2;
    cin.ignore();
    // cout<<r1<<" -> "<<r2<<"\n";
    //while(true)//57 78
    //  {

    map<ll,ll>mp;
    while(true)//483 456
    {
        // cout<<1;
        if(r2 > r1) {r1 = solve(r1);mp[r1]++;}
        else {r2 = solve(r2);   mp[r2]++;}
       // cout<<r1<<" "<<r2<<"\n";


        //cout<<r1<<"\n";
        if(r2 == r1)
        {
            cout<<r1;
            return 0;
        }
        if(mp[r1] == 2)
        {
            // cout<<"this"<<r1;
            cout<<r1;
            // system("pause");
            return 0;
        }
        else if(mp[r2] == 2)
        {
            //  cout<<"this"<<r2;
            cout<<r2;
            // system("pause");
            return 0;
        }
    }
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    //cout << "42" << endl;
}
/*
32
47

47
*/

