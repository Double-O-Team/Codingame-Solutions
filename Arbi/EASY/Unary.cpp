#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()

string bin(char c) {
  string ret = "";
  int val = (int)c;
  for(int bit = 0;bit < 7;bit++){
   if(val & (1 << bit))ret += '1';
   else ret += '0';
  }
  reverse(all(ret));
  return ret;
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    string MESSAGE;
    getline(cin , MESSAGE);
    string converted = "";
    string answer = "";
    for (int i = 0; i < MESSAGE.size(); i++) {
        string temp = bin(MESSAGE[i]);
        converted += temp;
    }

    int i = 0;
    char currentChar;
    while (i < converted.size()) {
        if (converted[i] == '0') {
            cout << "00 ";
            currentChar = '0';
        } else {
            cout << "0 ";
            currentChar = '1';
        }

        while (converted[i] == currentChar) {
            cout << "0";
            i++;
            if(i == converted.size())
                break;
        }

        if (i < converted.size())
            cout << " ";
    }
}
