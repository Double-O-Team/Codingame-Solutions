#include <climits>
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
  int n; // the number of temperatures to analyse
  cin >> n; cin.ignore();
  int dis = INT_MAX;
  int output = INT_MAX;
  for (int i = 0; i < n; i++) {
    int t; // a temperature expressed as an integer ranging from -273 to 5526
    cin >> t; cin.ignore();
    if (abs(t - 0) <= dis) {
      if (abs(t) == output)
        output = (output >= t ? output : t);
      else
        output = t;
      dis = abs(t - 0);
    }
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  if (n > 0)
    cout << output << endl;
  else
    cout << 0 << endl;
}
