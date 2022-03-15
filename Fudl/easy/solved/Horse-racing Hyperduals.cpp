#include <climits>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
**/

struct horse {
  int vi, ei;
};

int d(horse a, horse b) {
  return abs(a.vi - b.vi) + abs(a.ei - b.ei);
}

int main()
{
  int n;
  cin >> n; cin.ignore();
  horse player[n];
  for (int i = 0; i < n; i++) {
    cin >> player[i].vi >> player[i].ei; cin.ignore();
  }
  int min = INT_MAX;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      int temp = d(player[i], player[j]);
      if (temp < min) {
        min = temp;
      }
    }
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;
  cout << min << endl;
}
