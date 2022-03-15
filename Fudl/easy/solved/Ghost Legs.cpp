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
  int w;
  int h;
  cin >> w >> h; cin.ignore();
  string line[h];
  for (int i = 0; i < h; i++) {
    getline(cin, line[i]);
  }
  for (int i = 0; i < w; i += 3) {
    int j = 1;
    int k = i;
    while (j < h-1) {
      if (k == 0) {
        if (line[j][k+1] == '-')
          k += 3;
      }
      else if (k == w - 1) {
        if (line[j][k-1] == '-')
          k -= 3;
      }
      else if (line[j][k+1] == '-') {
        k += 3;
      }
      else if (line[j][k-1] == '-') {
        k -= 3;
      }
      j++;
    }
    cout << line[0][i] << line[j][k] << endl;
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;
}
