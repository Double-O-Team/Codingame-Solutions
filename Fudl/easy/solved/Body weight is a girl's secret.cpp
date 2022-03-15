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
  int buffer[10];
  int sum = 0;
  for (int i = 0; i < 10; i++) {
    cin >> buffer[i]; cin.ignore();
    sum += buffer[i];
  }
  sum /= 4;
  sum = sum - buffer[0] - buffer[9];

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  cout << buffer[1] - sum               <<  " ";
  cout << buffer[0] - (buffer[1] - sum) <<  " ";
  cout <<       sum                     <<  " ";
  cout << buffer[9] - (buffer[8] - sum) <<  " ";
  cout << buffer[8] - sum               << endl;
}
