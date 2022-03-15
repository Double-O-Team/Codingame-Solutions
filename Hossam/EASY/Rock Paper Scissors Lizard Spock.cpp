#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
     map<pair<string,string>,string>mp;
   mp[{"C","P"}]=mp[{"P","C"}]="C";
    mp[{"P","R"}]=mp[{"R","P"}]="P";
    mp[{"R","L"}]=mp[{"L","R"}]="R";
    mp[{"L","S"}]=mp[{"S","L"}]="L";
    mp[{"S","C"}]=mp[{"C","S"}]="S";
    mp[{"C","L"}]=mp[{"L","C"}]="C";
    mp[{"L","P"}]=mp[{"P","L"}]="L";
    mp[{"P","S"}]=mp[{"S","P"}]="P";
    mp[{"S","R"}]=mp[{"R","S"}]="S";
    mp[{"R","C"}]=mp[{"C","R"}]="R";
    map<int,vector<int>>ms;
    priority_queue<pair<int,pair<int,string>> >pq;
    priority_queue<pair<int,pair<int,string>> >tmp;
    
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int numplayer;
        string signplayer;
        cin >> numplayer >> signplayer; cin.ignore();
         pq.push({i,{numplayer,signplayer}});
    }

    while(1)
    {
        while(pq.size())
        {
            pair<int,pair<int,string>>m[2];
            m[0]=pq.top();
            pq.pop();
            m[1]=pq.top();
            pq.pop();
            ms[m[0].first].push_back(m[1].second.first);
            ms[m[1].first].push_back(m[0].second.first);
            if(m[0].second.second==m[1].second.second)
            {
                if(m[0].second.first<m[1].second.first)tmp.push(m[0]);
                else tmp.push(m[1]);
            }
            else if(mp[{m[0].second.second,m[1].second.second}]==m[0].second.second)
            {
                tmp.push(m[0]);
            }
            else tmp.push(m[1]);
        }
        while(tmp.size())
        {
            pq.push(tmp.top());
            tmp.pop();
        }
        if(tmp.size()+pq.size()==1)break;
    }
    cout<<pq.top().second.first<<endl;
    int j=0;
    for(auto i:ms[pq.top().first])
    {
        cout<<i;
        if(j<ms[pq.top().first].size()-1)cout<<" ";
        j++;
    }
   cout<<endl;
}
