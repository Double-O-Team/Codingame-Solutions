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
  int width;
  int height;
  cin >> width >> height; cin.ignore();
  string line[height];
  for (int i = 0; i < height; i++) {
    cin >> line[i]; cin.ignore();
  }
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      int temp = 0;
      if (line[i][j] == '#') {
        cout << '#';
      }
      else {
        if (i+1 < height) { if (line[i+1][j] != '#') temp++; }
        if (i-1 >= 0) { if (line[i-1][j] != '#') temp++; }
        if (j+1 < width) { if (line[i][j+1] != '#') temp++; }
        if (j-1 >= 0) { if (line[i][j-1] != '#') temp++; }
        cout << temp; 
      }
    }
    cout << endl;
  }
}
