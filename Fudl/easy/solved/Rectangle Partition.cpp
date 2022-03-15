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
  int w;
  int h;
  int count_x;
  int count_y;
  cin >> w >> h >> count_x >> count_y; cin.ignore();
  count_x++;
  count_y++;
  int sx = (count_x % 2 == 0 ? (count_x + 1) * ((count_x)/2) : count_x * ((count_x+1)/2));
  int x[sx];
  x[count_x-1] = w;
  int sy = (count_y % 2 == 0 ? (count_y + 1) * ((count_y)/2) : count_y * ((count_y+1)/2));
  int y[count_y];
  map<int,int> Y;
  y[count_y-1] = h;
  Y[y[count_y-1]]++;
  int k;
  for (int i = 0; i < count_x-1; i++)
    cin >> x[i]; cin.ignore();
  for (int i = 0; i < count_y-1; i++) {
    cin >> y[i]; cin.ignore();
    Y[y[i]]++;
  }
  k = count_x;
  for (int i = count_x - 1; i > 0; i--)
    for (int j = i - 1; j >= 0; j--)
      x[k] = x[i] - x[j], k++;
  k = count_y;
  for (int i = count_y - 1; i > 0; i--)
    for (int j = i - 1; j >= 0; j--) {
      Y[y[i] - y[j]]++;
    }
  int output = 0;
  for (int i = 0; i < sx; i++)
    output += Y[x[i]];

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  cout << output << endl;
}
