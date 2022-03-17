//https://www.codingame.com/ide/puzzle/offset-arrays
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<char,string>mp;
map<pair<string,string>,string> mp2;
/*
3
A[-1..1] = 1 2 3
B[3..7] = 3 4 5 6 7
C[-2..1] = 1 2 3 4
A[0]
--
1
X[0..3] = 1 3 3 7
X[X[2]]
*/
string solve(string str)
{
    // cout<<str;
    string name,value;
    bool take = true;
    for(ll i =0; i<str.size(); i++)//A[A[-1]]
    {
        if(i == (str.size()-1) ) break;
        if(str[i] != '[' && take)
        {
            name+=str[i];
            continue;
        }
        else if (str[i] == '[' && take)
        {
            take = false;
            continue;
        }
        else value += str[i];
        //cout<<i<<" ";
    }
   // cout<<name<<"\n";
    //cout<<"-->"<<value<<"\n";
    string res;
    if(mp2.find({name,value}) != mp2.end())
    {
        //cout<<"NOW";
        //cout<< mp2[ {name,value}];
        return mp2[ {name,value}];
    }
    else
    {
            res = solve(value);
          return mp2[ {name,res}];
    }

}
void solve2(string str)//A[-1..1] = 1 2 3
{
    string name="";
    string start="",End ="";
    bool take = true, take2 = true, take3 = true;
    for(ll i =0; i<str.size(); i++)
    {
        if(str[i] != '[' && take)
        {
            name+=str[i];
            continue;
        }
        else if (str[i] == '[')
        {
            take = false;
            continue;
        }
        if(str[i] != '.' && take2)
        {
            start += str[i];
            continue;
        }
        else if(str[i] == '.' && take2)
        {
            take2 = false;
            continue;
        }
        if(str[i] != '.' && str[i] != ']' && take3)
        {
            End += str[i];
            continue;
        }
        else if(str[i] == ']' && take3)
        {
            take3 = false;
        }

    }
    //cout<<name<<"->"<<start<<"-->"<<End<<"\n";

    vector<string> v1;
    for(ll i =0; i<str.size(); i++)
    {
        if(str[i] == '=')
        {
            string r ;
            for(ll j =i+1; j<str.size(); j++,i++)
            {
                if(str[j] != ' ') r += str[j];
                else if(r.size() && str[j] == ' ')
                {
                    v1.push_back(r);
                    r="";
                }
            }
            v1.push_back(r);
            //cout<<r<<"\n";
        }
    }
    //for(auto it: v1)cout<<it<<"\n";
    ll s, e;
    istringstream(start) >> s;
    istringstream(End) >> e;
    //cout<<"here";
    ll idx= 0;
    for(ll i = s; i<=e; i++)
    {
        //cout<<i;
        string sss = to_string(i);
        mp2[ {name,sss}] = v1[idx];
        idx++;
    }
//     for(auto &it:mp2)
//     {
//         cout<<it.first.first<<" "<<it.first.second <<"-->" << it.second<<"\n";
//     }


}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string assignment;
        getline(cin, assignment);
        //mp[assignment[i]] = assignment;
        solve2(assignment);
    }
    string x;
    getline(cin, x);
    string s = solve(x);
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    cout<<s;
    //cout << "0" << endl;
}
/*

*/

