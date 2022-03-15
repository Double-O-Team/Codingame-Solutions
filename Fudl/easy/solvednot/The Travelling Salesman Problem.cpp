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

struct point {
  int x, y;
  bool p;
};

double d(point a, point b) {
  return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

int main()
{
  int n;
  cin >> n; cin.ignore();
  point city[n];
  double out = 0;
  for (int i = 0; i < n; i++) {
    cin >> city[i].x >> city[i].y; cin.ignore();
    city[i].p = true;
  }
  for (int i = 0; i < n; i++) {
    int idx = 0;
    double min = 10e9;
    bool pass = false;
    for (int j = 1; j < n; j++) {
      if (city[i].p) {
        if (min > d(city[i], city[i-1])) {
          min = d(city[i], city[i-1]);
          idx = i;
          pass = true;
        }
      }
    }
    if (pass)
      out += min;
    city[idx].p = false;
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  cout << round(out) << endl;
}
