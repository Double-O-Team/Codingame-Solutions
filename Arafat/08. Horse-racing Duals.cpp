//https://www.codingame.com/ide/puzzle/horse-racing-duals
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int n;
    cin >> n; cin.ignore();
    ll arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; cin.ignore();
    }
    sort(arr,arr+n);
    ll diff = INT_MAX;
    for (int i = 1; i < n; i++) {
        ll x = arr[i] - arr[i-1];
        if(x < diff && x >= 0)
        {
            diff = x;
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << diff << endl;
}
