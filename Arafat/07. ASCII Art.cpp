//https://www.codingame.com/ide/puzzle/ascii-art
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
string TOLOW(string str)
{
    for(ll i =0; i<str.size(); i++)
    {
        str[i] = tolower(str[i]);
    }
    return str;
}

int main()
{
    vector<string>v1;
    int l;
    cin >> l;
    cin.ignore();
    int h;
    cin >> h;
    cin.ignore();
    string t;
    //cerr<<h<<"->"<<l;
    getline(cin, t);
    t = TOLOW(t);
    //cout<<t;
    for (int i = 0; i < h; i++)
    {
        string row;
        getline(cin, row);
        // cerr<<row<<endl;

        for (int j = 0; j < t.size(); j++)
        {
            ll diff ;
            if(t[j] >= 'a' && t[j] <= 'z')
            diff = t[j] - 'a';
            else diff = 26;
            ll init = l * diff;
            string res = "";
            for (int k = init; k < (init+l); k++)
            {
                cout<<row[k];
              // res += row[k];
            }
           // v1.push_back(res);
        }
        cout<<endl;


    }
//for(auto it:v1)
//{
//
//cout<<it <<"\n";
//}




}
