#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
**/
int calc(int a) {
  int out = 0;
  while (a) { out += a % 10; a /= 10;}
  return out;
}

int main()
{
  long long r_1;
  cin >> r_1; cin.ignore();
  long long r_2;
  cin >> r_2; cin.ignore();
  while (r_1 != r_2) {
    if (r_1 > r_2) {
      r_2 += calc(r_2);
    }
    else {
      r_1 += calc(r_1);
    }
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  cout << r_1 << endl;
}
