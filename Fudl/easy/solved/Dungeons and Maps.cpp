#include <climits>
#include <map>
#include <cstdio>
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
  int w;
  int h;
  cin >> w >> h; cin.ignore();
  int start_row;
  int start_col;
  cin >> start_row >> start_col; cin.ignore();
  int n;
  cin >> n; cin.ignore();
  int min = INT_MAX;
  int out = 0;
  bool trap = true;
  bool pass = false;
  for (int i = 0; i < n; i++) {
    map<string,int> visit;
    string map[h];
    for (int j = 0; j < h; j++) {
      getline(cin, map[j]);
    }
    int ln = 1;
    int k = start_row, l = start_col;
    visit[to_string(k)+to_string(l)]++;
    while (true) {
      if (!(k >= 0 && k < h) && !(l >= 0 && l < w)) { break; }
      else if (map[k][l] == 'T') { ln++; pass = true; trap = false; break; }
      else if (map[k][l] == '#') { pass = false; break; }
      else if (map[k][l] == '.') { pass = false; break; }
      else if (map[k][l] == '<') {  l--; ln++;  }
      else if (map[k][l] == '>') {  l++; ln++;  }
      else if (map[k][l] == 'v') {  k++; ln++;  }
      else if (map[k][l] == '^') {  k--; ln++;  }
      if (k == start_row && l == start_col) { pass = false; break; }
      if (visit[to_string(k)+to_string(l)] >= 1) { pass = false; break; }
      visit[to_string(k)+to_string(l)]++;
    }
    if (pass)
      if (ln < min) {
        min = ln;
        out = i;
      }
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  if (!trap)
    cout << out << endl;
  else
    puts("TRAP");
}
