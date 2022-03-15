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

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  for (int i = 0; i <= n/5; i++) {
    for (int j = 0; j >= 0 && j <= i && j <= n/2; j++) {
      if (n - i*5 - j*2 == 0)
      cout << i << " " << j << " " << (n-i*5-j*2) << endl;
      else if ((n-i*5-j*2) > 0 && (n-i*5-j*2) % 3 == 0)
      cout << i << " " << j << " " << (n-i*5-j*2)/3 << endl;
    }
  }
}
