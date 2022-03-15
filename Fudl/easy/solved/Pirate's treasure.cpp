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
  cin >> w; cin.ignore();
  int h;
  cin >> h; cin.ignore();
  int v[h][w];
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> v[i][j]; cin.ignore();
    }
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (v[i][j] == 0) {
        int one = 0, zero = 0;
        for (int k = i - 1; k <= i + 1; k++) {
          for (int l = j - 1; l <= j + 1; l++) {
            if (k == i && l == j)
              continue;
            if ((k < h && k >= 0) && (l < w && l >= 0)) {
              if (v[k][l] == 1) {
                one++;
              }
              else {
                zero++;
              }
            }
          }
        }
        cerr << "one: " << one << " zero: " << zero << endl;
        cerr << "x: " << j << " y: " << i << endl;
        if ((one == 3 || one == 5 || one == 8 ) && zero == 0) {
          cout << j << " " << i << endl;
        }
      }
    }
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

}
