#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

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
    string x;
    getline(cin, x);
    set<string> buffer;
    bool pass = true;
    string tmp = x;
    while (buffer.find(tmp) == buffer.end()) {
      long long sum = 0;
      buffer.insert(tmp);
      for (int j = 0; j < tmp.size(); j++)
        sum += (tmp[j] - '0') * (tmp[j] - '0');
      if (sum == 1) {
        cout << x << " :)\n";
        pass = false;
        break;
      }
      tmp = to_string(sum);
    }
    if (pass) cout << x << " :(\n";
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

}
