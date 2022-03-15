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
    int out = 0;
    string line;
    getline(cin, line);
    for (int j = 0; j < line.size(); j++) {
      if (line[j] == 'f') {
        out++;
        j += 2;
      }
    }
    cout << out << endl;
  }
}
