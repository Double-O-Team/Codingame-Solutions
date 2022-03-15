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
  string b;
  getline(cin, b);
  int out = 1;
  int prev = 0, next = 0;
  int z = 0;
  for (int i = 0; i < b.size(); i++) {
    if (b[i] == '1') {
      if (z == 1) {
        prev = next;
        next = 0;
        while (i < b.size()) {
          if (b[i] == '0') {
            i--;
            break;
          } 
          else {
            next++;
            i++;
          }
        }
        out = max(out, prev + next + 1);
      }
      else {
        prev = next;
        next = 0;
        while (i < b.size()) {
          if (b[i] == '0') {
            i--;
            break;
          } 
          else {
            next++;
            i++;
          }
        }
        out = max(out, max(next + 1, prev + 1));
      }
      z = 0;
    }
    else if (b[i] == '0') {
      z++;
    }
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  cout << out << endl;
}
