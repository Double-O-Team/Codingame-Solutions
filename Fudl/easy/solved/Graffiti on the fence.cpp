#include <iostream>
#include <string>
#include <utility>
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
  vector<pair<long long, long long> > range;
  for (int i = 0; i < n; i++) {
    int st;
    int ed;
    cin >> st >> ed; cin.ignore();
    range.push_back(make_pair(st, ed));
  }
  sort(range.begin(), range.end());
  long long pos = 0;
  bool pass = true;
  for (int i = 0; i < range.size(); i++) {
    if (range[i].first > pos) {
      cout << pos << " " << range[i].first << endl;
      pass = false;
    }
    if (pos < range[i].second)
      pos = range[i].second;
  }
  if (pos < l) {
    cout << pos << " " << l << endl;
    pass = false;
  }
  if (pass)
    puts("All painted");

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

}
