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
  string out = "*";
  for (int i = 0; i < n; i++) {
    if (i == 0) cout << '.';
    else cout << ' ';
    for (int j = i+1; j < 2*n - 1; j++) cout << ' ';
    cout << out;
    out += "**";
    cout << endl;
  }
  out = "*";
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n - 1; j++) cout << ' ';
    cout << out;
    for (int j = i+1; j < 2*n - i; j++) cout << ' ';
    cout << out;
    out += "**";
    cout << endl;
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

}
