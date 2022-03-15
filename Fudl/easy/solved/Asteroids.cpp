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

int main()
{
  int w;
  int h;
  int t1;
  int t2;
  int t3;
  cin >> w >> h >> t1 >> t2 >> t3; cin.ignore();
  string first_picture_row[h];
  string second_picture_row[h];
  vector<string> output(h, string(w, '.'));
  for (int i = 0; i < h; i++) {
    cin >> first_picture_row[i] >> second_picture_row[i]; cin.ignore();
  }
  for (int i = 0; i < w; i++) {
    for (int j = 0; j < h; j++) {
      if (isalpha(first_picture_row[i][j])) {
        for (int k = 0; k < w; k++) {
          for (int l = 0; l < h; l++) {
            if (first_picture_row[i][j] == second_picture_row[k][l]) {
              double x, y;
              x = k - i;
              y = l - j;
              x /= t2 - t1;
              y /= t2 - t1;
              x *= t3 - t2;
              y *= t3 - t2;
              x = floor(x);
              y = floor(y);
              x += k;
              y += l;
              if ((x >= 0 && x < w) && (y >= 0 && y < h)) {
                if (isalpha(output[x][y]) && (int)output[x][y] >= (int)second_picture_row[k][l]) {
                  output[x][y] = second_picture_row[k][l];
                }
                else if (output[x][y] == '.') {
                  output[x][y] = second_picture_row[k][l];
                }
              }
            }
          }
        }
      }
    }
  }


  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  for (int i = 0; i < w; i++) {
    for (int j = 0; j < h; j++) {
      cout << output[i][j];
    }
    cout << endl;
  }

}
