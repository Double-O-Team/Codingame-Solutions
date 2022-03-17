#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<vector<int>>ans;
int n;
vector<int>v;
void solve(int index){
    if(index == 3){
        if(v[0]*5 + v[1]*2 + v[2]*3 == n) {
            if(v[1] <= v[0]) ans.push_back(v); 
        }
        return;
    }
    for(int x = 0; x<=100; x++){
        v.push_back(x);
        solve(index+1);
        v.pop_back();
    }
}


int main()
{
    cin >> n; cin.ignore();
    solve(0);
    for(int x = 0; x<ans.size(); x++){
        for(int y = 0; y < ans[x].size(); y++){
            cout<<ans[x][y];
            if(y!=ans[x].size()-1)cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
