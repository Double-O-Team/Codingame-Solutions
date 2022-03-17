//https://www.codingame.com/ide/puzzle/container-terminal
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(string line)//CBA CBA CBA CBA CBA CBA
{
    vector<stack<char>> v2;
    stack<char> s1;
    s1.push(line[0]);
    v2.push_back(s1);
    for (int i = 1; i < line.size(); i++)
    {
        bool is = true;
        for(ll j =0; j<v2.size(); j++)
        {
            if(line[i] <= v2[j].top())
            {
                v2[j].push(line[i]);
                is = false;
                break;
            }
        }
        if(is)
        {
            stack<char> s2;
            s2.push(line[i]);
            v2.push_back(s2);
        }

    }
    //cout<<v2.size();
    return v2.size();
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string line;
        getline(cin, line);
        ll res = solve(line);
        cout<<res<<"\n";
    }


    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

}

//CBACBACBACBACBACBA
