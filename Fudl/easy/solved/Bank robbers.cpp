#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
**/

int main()
{
  int r;
  cin >> r; cin.ignore();
  int v;
  cin >> v; cin.ignore();
  long long a[r];
  for (int i = 0; i < r; i++)
    a[i] = 0;
  for (int i = 0; i < r; i++)
    cerr << a[i] << " ";
  cerr << endl;
  for (int i = 0; i < v; i++) {
    int c;
    int n;
    cin >> c >> n; cin.ignore();
    long long time = pow(10, n) * pow(5, c-n);
    sort(a, a+r);
    cerr << time << endl;
    a[0] += time;
    for (int i = 0; i < r; i++)
      cerr << a[i] << " ";
    cerr << endl;
  }
  sort(a, a+r);

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;
  cout << a[r-1] << endl;

}
