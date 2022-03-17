//https://www.codingame.com/ide/puzzle/ghost-legs
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
map<char,ll> CharIdx;
string solve(string str)
{
    string res = "";
    for(ll i =0; i<str.size(); i++)
    {
        if(str[i] != ' ')
        {
            CharIdx [ str[i] ] = i;
            res += str[i];
        }
    }
    return res;
}
int main()
{
    int w;
    int h;
    cin >> w >> h;
   // cout<<w<<" "<<h<<"\n";
    cin.ignore();
    string Alph;
       string line;
    for (int i = 0; i < h; i++)
    {

        getline(cin, line);
       // cout<<line<<"\n";
        if(i == 0)
        {
            Alph = solve(line);// "ABC"
            continue;
        }
        for(ll j =0; j<Alph.size(); j++)
        {
            char curr_alph = Alph[j];
            for(ll k =0; k<line.size(); k++)
            {
                if(k == 0 && CharIdx[ curr_alph ] == k && line[k+1] == '-')
                {
                        CharIdx[ curr_alph ] = CharIdx[ curr_alph ] + 3;
                        break;
                }
                else if(k == (line.size()-1) && CharIdx[ curr_alph ] == k && line[k-1] == '-')
                {
                        CharIdx[ curr_alph ] = CharIdx[ curr_alph ] - 3;
                        break;
                }
                else
                {
                    if(CharIdx[ curr_alph ] == k)
                    {
                        if(line[k-1] == '-')
                        {
                            CharIdx[ curr_alph ] = CharIdx[ curr_alph ] - 3;
                            break;
                        }
                        else if(line[k+1] == '-')
                        {
                            CharIdx[ curr_alph ] = CharIdx[ curr_alph ] + 3;
                            break;
                        }
                    }
                }


            }

        }


    }

  for(ll i =0;i<Alph.size();i++)
    {
        cout<<Alph[i]<<line[CharIdx[Alph[i]]]<<"\n";
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

//    cout << "answer" << endl;
}


