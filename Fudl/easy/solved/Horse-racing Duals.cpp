#include <climits>
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
  int buffer[n];
  for (int i = 0; i < n; i++) {
    cin >> buffer[i]; cin.ignore();
  }
  sort(buffer, buffer+n);
  int min = INT_MAX;
  for (int i = 1; i < n; i++) {
    if (buffer[i] - buffer[i-1] < min)
      min = buffer[i] - buffer[i-1];
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  cout << min << endl;
}
