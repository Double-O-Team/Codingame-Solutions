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
  long long p;
  cin >> p; cin.ignore();
  string c, out = "";
  getline(cin, c);
  while (p >= 0) {
    out += c[p % c.size()];
    p /= c.size();
    p--;
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  cout << out << endl;
}
