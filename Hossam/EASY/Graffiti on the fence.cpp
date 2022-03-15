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
pair<long long ,long long>range[200];
int main()
{
    int l;
    cin >> l; cin.ignore();
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int st;
        int ed;
        cin >> st >> ed; cin.ignore();
        range[i].first=st;
        range[i].second=ed;
    }

   sort(range,range+n);
   long long s=0;
   bool f=0;
   for(int i=0;i<n;i++)
   {
       if(range[i].first-s>0)
       {
           cout<<s<<" "<<range[i].first<<endl;
           f=1;
       }
       s=max(range[i].second,s);
   }
   if(l-s>0){cout<<s<<" "<<l<<endl;f=1;}
   if(!f)cout<<"All painted\n";
}
