#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
**/
struct comp {
  int nx;
  bool state;
};

int main()
{
  int n;
  int m;
  int c;
  comp device[n];
  cin >> n >> m >> c; cin.ignore();
  for (int i = 0; i < n; i++) {
    cin >> device[i].nx; cin.ignore();
    device[i].state = false;
  }
  int sum = 0;
  int max = 0;
  for (int i = 0; i < m; i++) {
    int mx;
    cin >> mx; cin.ignore();
    if (!device[mx-1].state)
    { sum += device[mx-1].nx; device[mx-1].state = true; }
    else
    { sum -= device[mx-1].nx; device[mx-1].state = false; }
    if (sum > c) {
      return cout << "Fuse was blown.\n", 0;
    }
    else if (max < sum) { max = sum; }
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  cout << "Fuse was not blown." << endl;
  cout << "Maximal consumed current was " << max << " A." << endl;
}
