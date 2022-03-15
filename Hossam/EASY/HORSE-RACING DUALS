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
    int arr[n+2];
    for (int i = 0; i < n; i++) {
        int pi;
        cin >> pi; cin.ignore();
        arr[i]=pi;
    }
    int ans=1e9;
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
    {
        ans=min(ans,arr[i+1]-arr[i]);
    }
    

    cout << ans << endl;
}
