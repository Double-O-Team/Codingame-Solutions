#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
map<string ,string>mp;
vector<string>v;
int main()
{
    int n; // Number of elements which make up the association table.
    cin >> n; cin.ignore();
    int q; // Number Q of file names to be analyzed.
    cin >> q; cin.ignore();
    for (int i = 0; i < n; i++) {
        string ext; // file extension
        string mt; // MIME type.
        cin >> ext >> mt; cin.ignore();
    
        for(int j=0;j<ext.size();j++)
        {
            ext[j]=   toupper(ext[j]);
           
        }
        mp[ext]=mt;
    }
    for (int i = 0; i < q; i++) {
        string fname;
        getline(cin, fname); 
        string str="";
        int dot=-1;
        for(int j=fname.size()-1;j>=0;j--)
        {
            if(fname[j]=='.')
            {
                dot=j;
                break;
            }
        }
        if(dot!=-1){
        for(int j=dot+1;j<fname.size();j++)
        {
            fname[j]=toupper(fname[j]);
            str+=fname[j];
            
        }
        }
        (mp[str].size())?
        v.push_back(mp[str]):v.push_back("UNKNOWN");
    }
   // cout<<"\n\n";
    for(auto i :v)cout<<i<<endl;
   
}
