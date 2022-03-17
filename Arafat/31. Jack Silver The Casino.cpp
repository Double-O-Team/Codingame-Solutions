//https://www.codingame.com/ide/puzzle/jack-silver-the-casino
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
57
70545
31 PLAIN 30
18 PLAIN 35
14 PLAIN 32
25 ODD
13 PLAIN 9
14 PLAIN 34
32 ODD
26 PLAIN 9
29 EVEN
7 PLAIN 21
32 PLAIN 29
0 PLAIN 7
7 PLAIN 34
13 PLAIN 14
22 PLAIN 8
*/
ll  solve(string play,ll cash)
{
    ll bet = ceil(0.25 * cash);
    //cout<<"this ->"<<bet<<"\n";
    string ball, call, number;
    string temp;
    ll idx = 1;
    for(ll i =0; i<play.size(); i++)//31 PLAIN 30
    {
        if(play[i] == ' ' && idx == 1)
        {
            ball = temp;
            idx++;
            temp="";
            continue;
        }
        if(play[i] == ' ' && idx == 2)
        {
            call = temp;
            idx++;
            temp="";
            continue;
        }
        temp += play[i];
    }

    if(idx == 2)call = temp;
    if(idx == 3) number = temp;
    //cout<<ball<<"->"<<call<<"->";
    //if(idx == 3) cout<<number;
    //puts("");
    ll BALL ;
    istringstream(ball) >> BALL;
    if(call == "PLAIN")
    {
        if(ball == number)
        {
            bet *= 35;
            cash += bet;
        }
        else  cash -= bet;
    }
    else  if(call == "EVEN")
    {
        if(!(BALL & 1) and BALL != 0)
        {
            cash += bet;
        }
        else  cash -= bet;
    }
    else
    {
        if(BALL & 1)
        {
            cash += bet;
        }
        else  cash -= bet;
    }
    return cash;

}
int main()
{
    int rounds;
    cin >> rounds;
    cin.ignore();
    int cash;
    cin >> cash;
    cin.ignore();
    for (int i = 0; i < rounds; i++)
    {
        string play;
        getline(cin, play);
        cash = solve(play,cash);
    }

    cout<<cash;
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    //cout << "cash of the target after playing" << endl;
}


