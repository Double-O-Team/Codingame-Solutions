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
  int l;
  cin >> l; cin.ignore();
  int n;
  cin >> n; cin.ignore();
  vector<int> b(n);
  int min = INT_MAX, max = INT_MIN;
  for (int i = 0; i < n; i++) {
    cin >> b[i]; cin.ignore();
    if (b[i] > max) max = b[i];
    if (b[i] < min) min = b[i];
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  cout << std::max(l - min, max) << endl;

}
