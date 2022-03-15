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
set<int>st;
int main()
{
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        string line;
        st.clear();
        getline(cin, line);
        int j=0;
        for(auto ch:line)
        {
            if(ch=='f')st.insert(j);
            j++;
        }
        int ans=0;
        int cnt=0;
        int prv=-1;
        for(auto it:st)
        {
            if(prv!=-1)
            {
                if(it-prv==1)cnt++,prv=it;
                else if(it-prv==2&&cnt==1) 
                {
                    ans++;
                    cnt=0;
                    prv=-1;
                }
                else
                {
                    ans++;
                    cnt=1;
                    prv=it;
                }
                if(cnt==3)
                {
                    ans++;
                    cnt=0;
                    prv=-1;
                }
            }
           else if(prv==-1)prv=it,cnt++;
        }
        if(cnt)ans++;
        cout<<ans<<endl;
    }
    
}
