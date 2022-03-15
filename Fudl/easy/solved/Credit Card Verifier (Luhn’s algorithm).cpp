#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool valid(long long num);

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
**/

int main()
{
  int n;
  cin >> n; cin.ignore();
  for (int i = 0; i < n; i++) {
    int j = 4;
    string card = "";
    while (j--) {
      string temp;
      cin >> temp; cin.ignore();
      card += temp;
    }
    long long num = stoll(card);
    cout << (valid(num) ? "YES\n" : "NO\n");
  }

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

}

bool valid(long long num)
{
  int set_1 = 0, set_2 = 0;
  while (num)
  {
    set_1 += num % 10;
    num /= 10;
    if (num % 10 >= 5)
    {
      int temp = (num % 10) * 2;
      set_2 += temp % 10;
      temp /= 10;
      set_2 += temp % 10;
    }
    else
    {
      set_2 += 2 * (num % 10);
    }
    num /= 10;
  }
  //printf("set_1: %i\n", set_1);
  //printf("set_2: %i\n", set_2);
  set_1 += set_2;
  if (set_1 % 10 == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}
