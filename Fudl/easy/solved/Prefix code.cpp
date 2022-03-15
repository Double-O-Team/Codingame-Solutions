#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
**/

int main()
{
  int n;
  cin >> n; cin.ignore();
  map<string, char> code;
  int max = 0;
  string b[n];
  for (int i = 0; i < n; i++) {
    int c;
    cin >> b[i] >> c; cin.ignore();
    code[b[i]] = c;
    if (b[i].size() > max) { max = b[i].size(); }
  }
  string s;
  string ans = "";
  cin >> s; cin.ignore();
  int j = 0;
  string temp = "";
  bool pass = true;
  int idx_fail = 0;
  for (int i = 0; i < s.size(); i++) {
    temp += s[i];
    if (temp.size() > max) { pass = false; break; }
    else if (code.find(temp) != code.end()) {
      ans += code[temp];
      temp = "";
      idx_fail = i + 1;
    }
    if (!pass) { break; }
  }


  if (pass && temp.size() == 0) {                 cout << ans << endl;                 }
  else      { cout << "DECODE FAIL AT INDEX " << idx_fail << endl; }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

}
