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
  vector<int> x;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp; cin.ignore();
    x.push_back(temp);
  }
  int counter = 0;
  int ans = 0;
  while (counter < n - 1) {
    sort(x.begin(), x.end());
    //for (int i = 0; i < n; i++)
    //  cout << x[i] << " ";
    //cout << endl;
    x[counter+1] += x[counter];
    ans += x[counter+1];
    x[counter] = 0;
    counter++;
  }


  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  cout << ans << endl;
}
