#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#define TOP   1
#define BOT   2
#define RIGHT 3
#define LEFT  4

using namespace std;

struct robot {
    int x_init, y_init;
    int x, y;
    int d;
};

int main() {
  int w, h;
  long long op, tmp = 0;
  robot rob;
  rob.x_init = rob.y_init = rob.x = rob.y = rob.d = TOP;
  cin >> w >> h >> op;
  char grid[h][w];
  for (int i = 0; i < h; i++) { 
    for (int j = 0; j < w; j++) {
      cin >> grid[i][j];
      if (grid[i][j] == 'O') {
        rob.x = rob.x_init = i; rob.y = rob.y_init = j;
      }
    }
  }

  bool pass = true;
  while(tmp++ < op) {
    switch(rob.d)
    {
      case TOP:
        if (pass) {
          if (grid[rob.x -1][rob.y] == '#') {
            rob.d = RIGHT;
            pass = false;
          }
          else {
            pass = true;
          }
        }
        else {
          if (grid[rob.x - 1][rob.y] == '#') {
            rob.d = RIGHT;
            pass = false;
          }
          else {
            rob.x--;
            pass = true;
          }
        }
        break;
      case BOT:
        if (pass) {
          if (grid[++rob.x +1][rob.y] == '#') {
            rob.d = LEFT;
            pass = false;
          }
          else {
            pass = true;
          }
        }
        else {
          if (grid[rob.x +1][rob.y] == '#') {
            rob.d = LEFT;
            pass = false;
          }
          else {
            rob.x++;
            pass = true;
          }
        }
        break;
      case RIGHT:
        if (pass) {
          if (grid[rob.x][++rob.y + 1] == '#') {
            rob.d = BOT;
            pass = false;
          }
          else {
            pass = true;
          }
        }
        else {
          if (grid[rob.x][rob.y + 1] == '#') {
            rob.d = BOT;
            pass = false;
          }
          else {
            rob.y++;
            pass = true;
          }
        }
        break;
      case LEFT:
        if (pass) {
          if (grid[rob.x][--rob.y - 1] == '#') {
            rob.d = TOP;
            pass = false;
          }
          else {
            pass = true;
          }
        }
        else {
          if (grid[rob.x][rob.y - 1] == '#') {
            rob.d = TOP;
            pass = false;
          }
          else {
            rob.y--;
            pass = true;
          }
        }
        break;
    }
    if (rob.d == TOP && rob.x == rob.x_init && rob.y == rob.y_init) { 
      tmp = op - (op % tmp);
    }
  }
  cout << rob.y << " " << rob.x << endl;
}
