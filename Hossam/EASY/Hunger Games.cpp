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
map<pair<string ,int>,set<string>>mp;
int main()
{
    int tributes;
    cin >> tributes; cin.ignore();
    set<string>st;
    for (int i = 0; i < tributes; i++) {
        string player_name;
        getline(cin, player_name);
        st.insert(player_name);
    }
    int turns;
    cin >> turns; cin.ignore();
    for (int i = 0; i < turns; i++) {
        string info;
        getline(cin, info);
        string str="";
        string arr[4];
        int l=0;
        for(auto ch:info)
        {
            if(ch!=' '&&ch!=',')
            str+=ch;
            if(ch==' '&&str.size()||ch==','&&str.size())
            {
                arr[l++]=str;
                if(l>2){
                mp[{arr[0],1}].insert(arr[l-1]);
                mp[{arr[l-1],0}].insert(arr[0]);
                }
                str="";
            }
            
        }
        arr[l++]=str;
      
        mp[{arr[0],1}].insert(arr[l-1]);
        mp[{arr[l-1],0}].insert(arr[0]);
    }
    int k=0;
    for(auto i : st)
    {
        cout<<"Name: "<<i<<endl;
        cout<<"Killed: ";
        if(mp[{i,1}].size())
        {
            int j=0;
            for(auto s:mp[{i,1}])
            {
                cout<<s;
               
                if(j<mp[{i,1}].size()-1)cout<<", ";
                 j++;
            }
            cout<<endl;
        }else cout<<"None\n";
        cout<<"Killer: ";
     (mp[{i,0}].size())?cout<<*mp[{i,0}].begin()<<endl:cout<<"Winner\n";
       
        if(k<st.size()-1)
        cout<<endl;
        k++;
    }
  
}
