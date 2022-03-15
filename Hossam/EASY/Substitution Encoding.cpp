#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


char ch[500][500];
map<char,pair<int ,int>>mp;
int main()
{
    int rows;
    int c=0;
    cin >> rows; cin.ignore();
    for (int i = 0; i < rows; i++) {
        string line;
        getline(cin,line);
       
        int l=0;
        for(int j=0;j<line.size();j+=2)
        {
            ch[i][l]=line[j];
            mp[ch[i][l]].first=i;
            mp[ch[i][l]].second=l;
            l++;
        }
    }
   
    string message;
    getline(cin, message);
    string ans="";
    for(int i=0;i<message.size();i++)
    {
        ans+=mp[message[i]].first+'0';
        ans+=mp[message[i]].second+'0';
    }
    cout<<ans<<endl;
   
}
