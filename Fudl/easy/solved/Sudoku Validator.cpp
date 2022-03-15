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
  int freq[9] = {0,0,0,0,0,0,0,0,0};
  char grid[9][9];
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> grid[i][j]; cin.ignore();
    }
  }
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (freq[grid[i][j] - '1'] != i)
        return cout << "false\n", 0;
      freq[grid[i][j] - '1']++;
    }
  }
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (freq[grid[j][i] - '1'] != i + 9)
        return cout << "false\n", 0;
      freq[grid[j][i] - '1']++;
    }
  }
  int k = 0, l = 3, n = 0, m = 3;
  int val = 18;
  for (int i = k; i < l; i++) {
    for (int j = n; j < m; j++) {
      if (freq[grid[i][j] - '1'] != val)
        return cout << "false\n", 0;
      freq[grid[i][j] - '1']++;
    }
  }
  k = 3; l = 6; val++;
  for (int i = k; i < l; i++) {
    for (int j = n; j < m; j++) {
      if (freq[grid[i][j] - '1'] != val)
        return cout << "false\n", 0;
      freq[grid[i][j] - '1']++;
    }
  }
  k = 6; l = 9; val++;
  for (int i = k; i < l; i++) {
    for (int j = n; j < m; j++) {
      if (freq[grid[i][j] - '1'] != val)
        return cout << "false\n", 0;
      freq[grid[i][j] - '1']++;
    }
  }
  k = 0; l = 3; val++;
  n = 3; m = 6;
  for (int i = k; i < l; i++) {
    for (int j = n; j < m; j++) {
      if (freq[grid[i][j] - '1'] != val)
        return cout << "false\n", 0;
      freq[grid[i][j] - '1']++;
    }
  }
  k = 3; l = 6; val++;
  n = 3; m = 6;
  for (int i = k; i < l; i++) {
    for (int j = n; j < m; j++) {
      if (freq[grid[i][j] - '1'] != val)
        return cout << "false\n", 0;
      freq[grid[i][j] - '1']++;
    }
  }
  k = 6; l = 9; val++;
  n = 3; m = 6;
  for (int i = k; i < l; i++) {
    for (int j = n; j < m; j++) {
      if (freq[grid[i][j] - '1'] != val)
        return cout << "false\n", 0;
      freq[grid[i][j] - '1']++;
    }
  }
  k = 0; l = 3; val++;
  n = 6; m = 9;
  for (int i = k; i < l; i++) {
    for (int j = n; j < m; j++) {
      if (freq[grid[i][j] - '1'] != val)
        return cout << "false\n", 0;
      freq[grid[i][j] - '1']++;
    }
  }
  k = 3; l = 6; val++;
  n = 6; m = 9;
  for (int i = k; i < l; i++) {
    for (int j = n; j < m; j++) {
      if (freq[grid[i][j] - '1'] != val)
        return cout << "false\n", 0;
      freq[grid[i][j] - '1']++;
    }
  }
  k = 6; l = 9; val++;
  n = 6; m = 9;
  for (int i = k; i < l; i++) {
    for (int j = n; j < m; j++) {
      if (freq[grid[i][j] - '1'] != val)
        return cout << "false\n", 0;
      freq[grid[i][j] - '1']++;
    }
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  cout << "true" << endl;
}
