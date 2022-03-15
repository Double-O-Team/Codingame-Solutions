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
    for (int i = 0; i < n; i++) {
        long long f;
        cin >> f; cin.ignore();
        while(f % 2 == 0) {
            f /= 2;
        }
        while(f % 3 == 0) {
            f /= 3;
        }
        while(f % 5 == 0) {
            f /= 5;
        }
        cout << (f == 1 ? "VICTORY\n" : "DEFEAT\n");
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    //cout << "DEFEAT" << endl;
}
