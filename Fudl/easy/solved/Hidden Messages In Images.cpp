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
  int counter = 8;
  cin >> w >> h; cin.ignore();
  int out = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      int pixel;
      cin >> pixel; cin.ignore();
      counter--;
      out += (pixel%2) * (pow(2, counter));
      if (counter == 0) {
        cout << (char)out;
        out = 0;
        counter = 8;
      }
    }
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

}
