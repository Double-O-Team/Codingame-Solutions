#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <map>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
**/

struct list {
  vector<int> val;
  int idx;
};

int main()
{
  int n;
  cin >> n; cin.ignore();
  map<string, list> buffer;
  for (int i = 0; i < n; i++) {
    string assignment;
    char sign;
    cin >> assignment >> sign; cin.ignore();
    int pos = assignment.find('.');
    int idx = stoi(assignment.substr(assignment.find('[')+1, pos - assignment.find('[') - 1));
    int ln = stoi(assignment.substr(pos+2,assignment.find(']') - pos - 2)) - idx;
    buffer[assignment.substr(0, assignment.find('['))].idx = idx;
    for (int j = 0; j <= ln; j++) {
      int temp; cin >> temp;
      buffer[assignment.substr(0, assignment.find('['))].val.push_back(temp);
    }
  }
  cin.ignore();
  string x;
  getline(cin, x);
  stack<string> ch;
  int idx = 0;
  //cout << x << endl;
  //cout << x.size() << endl;
  for (int i = 0; i < x.size(); i++) {
    //cout << "x[i]: " << x[i] << endl;
    if (isalpha(x[i])) {
      string temp = "";
      while (isalpha(x[i])) {
        temp += x[i];
        i++;
      }
      i--;
      ch.push(temp);
    }
    else if (isdigit(x[i]) || x[i] == '-') {
      string temp = "";
      while (x[i] != ']') {
        temp += x[i];
        i++;
      }
      //cout << "temp: "<< temp << endl;
      i--;
      idx = stoi(temp);
      //cout << "idx: " << idx << endl;
      while (!ch.empty()) {
        //cout << "ch.top: " << ch.top() << " ";
        idx = buffer[ch.top()].val[idx - buffer[ch.top()].idx];
        //cout << "idx: " << idx;
        ch.pop();
      }
      //cout << endl;
      break;
    }
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  cout << idx << endl;

}
