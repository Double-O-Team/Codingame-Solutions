#include <ctype.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
**/

int main()
{
  int n; // Number of elements which make up the association table.
  cin >> n; cin.ignore();
  int q; // Number Q of file names to be analyzed.
  cin >> q; cin.ignore();
  unordered_map<string, string> mime;
  for (int i = 0; i < n; i++) {
    string ext; // file extension
    string mt; // MIME type.
    cin >> ext >> mt; cin.ignore();
    for (int j = 0; j < ext.size(); j++) {
      if (isalpha(ext[j]))
        ext[j] = toupper(ext[j]);
    }
    mime[ext] = mt;
  }
  for (int i = 0; i < q; i++) {
    string fname;
    getline(cin, fname); // One file name per line.
    int n = -1;
    for (int j = fname.size()-1; j >= 0; j--) {
      if (fname[j] == '.') {
        n = j;
        break;
      }
    }
    if (n == -1) {
      cout << "UNKNOWN" << endl;
    }
    else {
      n++;
      for (int j = n; j < fname.size(); j++) {
        if (isalpha(fname[j]))
          fname[j] = toupper(fname[j]);
      }
      if (mime.find(fname.substr(n,fname.size() - n)) == mime.end())
        cout << "UNKNOWN" << endl;
      else
        cout << mime[fname.substr(n,fname.size() - n)] << endl;
    }
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;


  // For each of the Q filenames, display on a line the corresponding MIME type. If there is no corresponding type, then display UNKNOWN.
}
