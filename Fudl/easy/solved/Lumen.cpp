#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
**/

int main()
{
  int n;
  cin >> n; cin.ignore();
  int l;
  cin >> l; cin.ignore();
  char cell[n][n];
  stack<pair<int, int> > idx;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> cell[i][j]; cin.ignore();
      if (cell[i][j] == 'C') { idx.push(make_pair(i, j)); cell[i][j] = 0 + '0'; }
      else                   {                cell[i][j] =  '0';                }
    }
  }
  while (!idx.empty()) {
    int a = idx.top().first, m = idx.top().second;
    int x = 1;
    while (x <= l) {
      for (int i = a - l + x; i <= a + l - x; i++) {
        for (int j = m - l + x; j <= m + l - x; j++) {
          if ((i >= 0 && i < n) && (j >= 0 && j < n))
            cell[i][j] += 1;
        }
      }
      x++;
    }
    idx.pop();
  }

  int ans = 0;
  //for (int i = 0; i < n; i++) {
  //  for (int j = 0; j < n; j++) {
  //    cout << cell[i][j] << " ";
  //  }
  //  cout << endl;
  //}
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      if (cell[i][j] == '0')
        ans++;

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  cout << ans << endl;
}
