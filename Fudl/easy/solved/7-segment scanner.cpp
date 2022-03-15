#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
**/

string numbers[3] = {
" _     _  _     _  _  _  _  _ ",
"| |  | _| _||_||_ |_   ||_||_|",
"|_|  ||_  _|  | _||_|  ||_| _|"};

int main()
{
  string num[3];
  getline(cin, num[0]);
  string line_2;
  getline(cin, num[1]);
  string line_3;
  getline(cin, num[2]);
  int max = std::max(std::max(num[0].size(), num[1].size()), num[2].size());
  int k = 0, l = 3;
  while (l <= max) {
    for (int a = 0, temp = 0; a < 30;) {
      for (int i = 0; i < 3; i++) {
        for (int j = k; j < l && j < num[i].size(); j++,a++) {
          temp++;
          if (num[i][j] == numbers[i][a]) {
            temp--;
          }
        }
        if (i != 2)
          a -= 3;
      }
      if (temp == 0) { cout << a / 3 - 1; break; }
      temp = 0;
    }
    k += 3;
    l += 3;
  }
  cout << endl;

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

}
