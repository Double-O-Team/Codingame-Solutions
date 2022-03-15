#include <iostream>
#include "bits/stdc++.h"
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
    int n; // Number of elements which make up the association table.
    cin >> n; cin.ignore();
    int q; // Number Q of file names to be analyzed.
    cin >> q; cin.ignore();
    map<string , string> hash;
    for (int i = 0; i < n; i++) {
        string ext; // file extension
        string mt; // MIME type.
        cin >> ext >> mt; cin.ignore();
        string nw = "";
        for(auto item : ext) {
            nw += tolower(item);
        }
        hash[nw] = mt;
    }
    for (int i = 0; i < q; i++) {
        string fname;
        getline(cin, fname); // One file name per line.
        int idx = -1;
        for(int j = 0;j < fname.size();j++)if(fname[j] == '.'){
            idx = j;
        }
        if(idx == -1) {
          cout << "UNKNOWN\n";
          continue;
        }
        string key = "";
        for(int j = idx + 1;j < fname.size();j++)key += tolower(fname[j]);
        if(hash.find(key) != hash.end()) {
            cout << hash[key] << '\n';
        } else {
            cout << "UNKNOWN\n";
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;


    // For each of the Q filenames, display on a line the corresponding MIME type. If there is no corresponding type, then display UNKNOWN.
    //cout << "UNKNOWN" << endl;
}
