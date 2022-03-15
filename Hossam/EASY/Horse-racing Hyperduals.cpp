#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    cin >> n; cin.ignore();
    long long mn=1e12;
    pair<long long ,long long >pa[1000];
    for (int i = 0; i < n; i++) {
        int v;
        int e;
        cin >> v >> e; cin.ignore();
        pa[i].first=v;
        pa[i].second=e;
        
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            long long res=abs(pa[i].first-pa[j].first)+abs(pa[i].second-pa[j].second);
            mn=min(mn,res);
        }
    }
    cout<<mn<<endl;
}
