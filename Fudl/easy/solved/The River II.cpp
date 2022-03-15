#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
**/

int calc(int a) {
  int out = 0;
  while (a) { out += a % 10; a /= 10;}
  return out;
}

int main()
{
  int r_1;
  cin >> r_1; cin.ignore();
  int t = r_1;
  while (t--) {
    if (r_1 - t == calc(t))
      return cout << "YES\n", 0;
  }
  cout << "NO\n";
}
