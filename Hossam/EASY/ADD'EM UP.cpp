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
multiset<int >ms;
int main()
{
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x; cin.ignore();
        ms.insert(x);
    }
    int ans=0;
    while(ms.size()>=2)
    {
        auto it=ms.begin();
        ms.erase(ms.find(*it));
        
        auto is =ms.begin();
       
           ms.erase(ms.find(*is));
     
        int num=*it;
        int sum=*is;
        ms.insert(*it+*is);
     
        ans+=num+sum;
    
        
    }
    cout<<ans<<endl;
   
  
}
