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
    int l;
    cin >> l; cin.ignore();
    int n;
    cin >> n; cin.ignore();
    int ans=0;
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b; cin.ignore();
        ans=max(ans,max(abs(b-l),abs(b-0)));

    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << ans<< endl;
}
