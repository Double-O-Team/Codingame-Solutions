#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int solve(string s , int index){
    s[index] = '1';
    int mx = 0, cnt = 0;
    if(s[0] == '1') cnt++;
    
    for(int x = 1; x<s.size(); x++){
        if(s[x] == '1')cnt++;
        else{
            mx = max(cnt , mx);
            cnt = 0;
        }
    }
    mx = max(cnt , mx);
    return mx;
}
int main()
{
    string b;
    int ans = 0;
    getline(cin, b);
    for(int x = 0; x<b.size(); x++){
        if(b[x] == '0'){
            ans = max(ans, solve(b, x));
        }
    }
    cout<<ans<<endl;
    
    

}
