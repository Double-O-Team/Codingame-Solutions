//https://www.codingame.com/ide/puzzle/rock-paper-scissors-lizard-spock
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(string p1, string p2,ll player1,ll player2)
{
    if(p1 == "C" && p2 == "P") return player1;
    if(p1 == "P" && p2 == "C") return player2;

    if(p1 == "P" && p2 == "R") return player1;
    if(p1 == "R" && p2 == "P") return player2;

    if(p1 == "R" && p2 == "L") return player1;
    if(p1 == "L" && p2 == "R") return player2;

    if(p1 == "L" && p2 == "S") return player1;
    if(p1 == "S" && p2 == "L") return player2;

    if(p1 == "S" && p2 == "C") return player1;
    if(p1 == "C" && p2 == "S") return player2;

    if(p1 == "C" && p2 == "L") return player1;
    if(p1 == "L" && p2 == "C") return player2;

    if(p1 == "L" && p2 == "P") return player1;
    if(p1 == "P" && p2 == "L") return player2;

    if(p1 == "P" && p2 == "S") return player1;
    if(p1 == "S" && p2 == "P") return player2;

    if(p1 == "S" && p2 == "R") return player1;
    if(p1 == "R" && p2 == "S") return player2;

    if(p1 == "R" && p2 == "C") return player1;
    if(p1 == "C" && p2 == "R") return player2;

    if(player1 < player2) return player1;
    else  return player2;

}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<ll>v1;
    map<ll, pair<string,ll> >mp;
    for (ll i = 0; i < n; i++)
    {
        ll numplayer;
        string signplayer;
        cin >> numplayer >> signplayer;
        cin.ignore();
        v1.push_back(numplayer);
        mp[numplayer] = {signplayer,0};
    }
    map<ll,vector<ll>> LIST;
    while(v1.size() != 1)
    {
        vector<ll> temp;
        for(ll i=0; i<v1.size(); i+=2)
        {
            ll p1 = v1[i];
            ll p2 = v1[i+1];
            ll res  = solve(mp[p1].first,mp[p2].first,p1,p2);
            //cout<<res<<"\n";
           // system("pause");
            if(res == p1)
            {
                mp[p1].second++;
                temp.push_back(p1);
                LIST[p1].push_back(p2);
            }
            else
            {
                mp[p2].second++;
                temp.push_back(p2);
                LIST[p2].push_back(p1);
            }
        }
        v1 = temp;

    }
    //cout<<solve("P","R",0,0,8,3);
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

   // cout << "WHO IS THE WINNER?" << v1[0]<< endl;
   cout << v1[0]<< endl;
    for(ll i =0;i<LIST[v1[0]].size();i++ )
    {
        cout<<LIST[v1[0]][i];
        if(i != LIST[v1[0]].size()-1 ) cout<<" ";
    }
}


/*

*/
