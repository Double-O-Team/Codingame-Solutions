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
  string lon;
  cin >> lon; cin.ignore();
  string lat;
  cin >> lat; cin.ignore();
  int n;
  for (int i = 0; i < lon.size(); i++) {
    if (lon[i] == ',')
      lon[i] = '.';
  }
  for (int i = 0; i < lat.size(); i++) {
    if (lat[i] == ',')
      lat[i] = '.';
  }
  double lona = stod(lon);
  double lata = stod(lat);
  cin >> n; cin.ignore();
  string close;
  double min;
  bool pass = true;
  string output;
  for (int i = 0; i < n; i++) {
    string defib;
    getline(cin, defib);
    int a = -1, b = -1, c = -1, e = -1;
    double lonb, latb;
    c = defib.find(';');
    e = defib.find(';', c+1);
    c++;
    for (int j = 0; j < 4; j++) {
      a = defib.find(';', a+1);
    }
    b = defib.find(';', a+1);
    for (int j = a; j < defib.size(); j++) {
      if (defib[j] == ',')
        defib[j] = '.';
    }
    a++;
    b++;
    lonb = stod(defib.substr(a, b - a - 1));
    latb = stod(defib.substr(b, defib.size() - b));
    double x = (lonb - lona) * cos((lata + latb) / 2);
    double y = (latb- lata);
    double d = sqrt(x*x + y*y) * 6371;
    if (d < min || pass) {
      pass = false;
      min = d;
      output = defib.substr(c, e-c);
    }
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  cout << output << endl;
}
