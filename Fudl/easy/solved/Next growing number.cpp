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
  unsigned long long num;
  cin >> num;
  num++;
  string n = to_string(num);
  int pos = -1;
  char ch;
  for (int i = 0; i < n.size() - 1; i++) {
    if (n[i] > n[i+1]) {
      pos = i+1;
      ch = n[i];
      break;
    } 
  }
  if (pos == -1) cout << n << '\n';
  else {
    for (int i = 0; i < pos; i++)
      cout << n[i];
    for (int i = pos; i < n.size(); i++)
      cout << ch;
    cout << endl;
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

}
