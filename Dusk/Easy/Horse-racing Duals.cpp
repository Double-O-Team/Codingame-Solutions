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
    int a[n];
    for (int i = 0; i < n; i++) {
        int pi;
        cin >>a[i]; cin.ignore();
    }
    sort(a,a+n);
    int ans=1e9;
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]<ans)
        ans=a[i+1]-a[i];

    }
    cout<<ans<<endl;

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;


}
