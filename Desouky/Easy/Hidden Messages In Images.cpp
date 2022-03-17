#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    int h;
    cin >> w >> h; cin.ignore();
    vector<int>allBits;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            int pixel;
            cin >> pixel; cin.ignore();
            string s = bitset<8>(pixel).to_string();
            allBits.push_back(s[s.size()-1]-'0');
        }
    }
    vector<char>ans;
    vector<int>bits;
    for(int x = 0; x<allBits.size(); x++){
        if(x%8 == 0 and x!=0){
            string s = "";
            for(auto it: bits){
                s += char(it+'0');
            }
            istringstream in(s);
            bitset<8> bs;
            while(in >> bs);
            ans.push_back(bs.to_ullong());
            bits.clear();
        }
        bits.push_back(allBits[x]);
    }
    string s = "";
    for(auto it: bits){
        s += char(it+'0');
    }
    istringstream in(s);
    bitset<8> bs;
    while(in >> bs);
    ans.push_back(bs.to_ullong());
    bits.clear();
    for(auto it: ans)cout<<it;
}
