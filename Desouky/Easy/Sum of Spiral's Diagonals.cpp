#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second

int val = 1;
int n;
int grid[1509][1509];
void buildLayer(int r, int c){
    for(int x = c; x<n-c; x++){
        grid[r][x] = val++;
    }
    for(int x = r+1; x<n-r; x++){
        grid[x][n-1-c] = val++;
    }

    for(int x = n-1-c-1; x>=0+r; x--){
        grid[n-1-r][x] = val++;
    }
    for(int x = n-1-r-1; x>0+r; x--){
        grid[x][c] = val++;
    }
}
pair<int,int>p1 , p2 , p3 , p4;
long long solve(){
    if(n == 1) return 1;
    long long ret = 0;
    if(n%2 == 0){
        while(p1.F < p3.F){
            ret += grid[p1.F++][p1.S++];
            ret += grid[p2.F++][p2.S--];
            ret += grid[p3.F--][p3.S++];
            ret += grid[p4.F--][p4.S--];
        }
    }else{
        while(p1.F != p3.F){
            ret += grid[p1.F++][p1.S++];
            ret += grid[p2.F++][p2.S--];
            ret += grid[p3.F--][p3.S++];
            ret += grid[p4.F--][p4.S--];
        }
        ret += grid[p1.F][p1.S];
    }
    return ret;
}

int main()
{
    
    cin >> n; cin.ignore();
    int cpy = n;
    if(cpy%2==0)cpy--;
    for(int x = 0; x<=cpy/2; x++){
        buildLayer(x,x);
    }
    // for(int x = 0; x<n; x++){
    //     for(int y = 0; y<n; y++){
    //         cout<<grid[x][y]<<" ";
    //     }
    //     cout<<"\n";
    // }
    p1 = {0,0} , p2={0,n-1} , p3={n-1,0} , p4={n-1,n-1};
    cout<<solve();
    


}
