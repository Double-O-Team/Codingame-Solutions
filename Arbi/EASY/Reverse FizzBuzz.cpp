#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define sz(x) (int)x.size()

int start = 1;
map<int, string> have;
vector <string> in;

bool valid(int f, int b, int n) {
    for(int i = start; i < start + n; i++) {
        if(i % f == 0 && i % b == 0) {
            if(have[i] != "FizzBuzz")return false;
        } else if(i % f == 0) {
            if(have[i] != "Fizz")return false;
        } else if(i % b == 0) {
            if(have[i] != "Buzz")return false;
        } else {
           if(have[i] != to_string(i))return false;
        }
    }
    return true;
}
int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    cin.ignore();
    bool once = true;
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
        in.push_back(line);
        if(line == "FizzBuzz" || line == "Fizz" || line == "Buzz")continue;
        if(once) {
            start = stoi(line) - i;
            once = false;
        }
    }
    int idx = start;
    for(int i = 0; i < in.size(); i++) {
        have[idx++] = in[i];
    }
    for(int i = 1; i <= 60; i++) {
        for(int j = 1; j <= 60; j++) {
            if(valid(i, j, n)) {
                cout << i << ' ' << j << '\n';
                return 0;
            }
        }
    }
}
