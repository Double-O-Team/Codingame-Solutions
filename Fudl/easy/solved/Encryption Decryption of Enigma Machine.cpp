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
  string operation;
  getline(cin, operation);
  int pseudo_random_number;
  cin >> pseudo_random_number; cin.ignore();
  string rotor[3];
  for (int i = 0; i < 3; i++) {
    getline(cin, rotor[i]);
  }
  string message;
  getline(cin, message);
  if (operation[0] == 'E') {
    for (int i = 0; i < message.size(); i++) {
      message[i] = ((message[i] - 'A' + pseudo_random_number + i) % 26) + 'A';
    }
    for (int i = 0; i < 3; i++)
      for (int j = 0; j < message.size(); j++)
        message[j] = rotor[i][message[j] - 'A'];
  }
  else {
    for (int i = 2; i > -1; i--)
      for (int j = 0; j < message.size(); j++)
        message[j] = rotor[i].find(message[j]) + 'A';
    for (int i = 0; i < message.size(); i++) {
      int idx = (message[i] - 'A' - pseudo_random_number - i);
      while (idx < 0)
        idx += 26;
      message[i] = (idx % 26) + 'A';
    }
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  cout << message << endl;
}
