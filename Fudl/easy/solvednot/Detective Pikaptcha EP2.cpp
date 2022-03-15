#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define TOP   '^'
#define BOT   'v'
#define RIGHT '>'
#define LEFT  '<'
#define R 'R'
#define L 'L'

using namespace std;

struct pika {
  int x_init, y_init;
  int x, y;
  char d, s;
};

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
**/

int main()
{
  int w;
  int h;
  cin >> w >> h; cin.ignore();
  pika o;
  int maze[h][w];

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char temp;
      cin >> temp; cin.ignore();
      if (maze[i][j] != '0' || maze[i][j] != '#') {
        maze[i][j] = 1;
        o.d = maze[i][j];
        o.x_init = o.x = j;
        o.y_init = o.y = i;
      }
      if (temp == '0') maze[i][j] = 0;
      if (temp == '#') maze[i][j] = -1;
    }
  }

  if(maze[o.x_init-1][o.y_init  ] == -1 && maze[o.x_init+1][o.y_init  ] == -1 &&
     maze[o.x_init  ][o.y_init-1] == -1 && maze[o.x_init  ][o.y_init+1] == -1) {
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (maze[i][j] == -1)
        cout << '#';
        else
        cout << maze[i][j];
      }
      cout << endl;
    }
    return 0;
  }

  cin >> o.s; cin.ignore();

  do {
    if(o.s == L)
    {
      switch(o.d)
      {
        case RIGHT: 
          if ( maze[o.x-1][o.y  ] != -1 ) { o.x--; o.d = TOP; }
          else if( maze[o.x  ][o.y+1] != -1 ) { o.y++; o.d = RIGHT; }
          else if( maze[o.x+1][o.y  ] != -1 ) { o.x++; o.d = BOT; }
          else  { o.y--; o.d = LEFT; }
          break;
        case BOT  :
          if     ( maze[o.x  ][o.y+1] != -1 ) { o.y++; o.d = RIGHT; }
          else if( maze[o.x+1][o.y  ] != -1 ) { o.x++; o.d = BOT;   }
          else if( maze[o.x  ][o.y-1] != -1 ) { o.y--; o.d = LEFT;  }
          else                                     { o.x--; o.d = TOP;   }
          break;
        case LEFT :
          if     ( maze[o.x+1][o.y  ] != -1 ) { o.x++; o.d = BOT;   }
          else if( maze[o.x  ][o.y-1] != -1 ) { o.y--; o.d = LEFT;  }
          else if( maze[o.x-1][o.y  ] != -1 ) { o.x--; o.d = TOP;   }
          else                                     { o.y++; o.d = RIGHT; }
          break;
        case TOP  :
          if     ( maze[o.x  ][o.y-1] != -1 ) { o.y--; o.d = LEFT;  }
          else if( maze[o.x-1][o.y  ] != -1 ) { o.x--; o.d = TOP;   }
          else if( maze[o.x  ][o.y+1] != -1 ) { o.y++; o.d = RIGHT; }
          else                                     { o.x++; o.d = BOT;   }
        default: break;
      }
    }
    else
    {
      switch(o.d)
      {
        case RIGHT: 
          if     ( maze[o.x+1][o.y  ] != -1 ) { o.x++; o.d = BOT;   }
          else if( maze[o.x  ][o.y+1] != -1 ) { o.y++; o.d = RIGHT; }
          else if( maze[o.x-1][o.y  ] != -1 ) { o.x--; o.d = TOP;   }
          else                                     { o.y--; o.d = LEFT;  }
          break;
        case BOT:
          if     ( maze[o.x  ][o.y-1] != -1 ) { o.y--; o.d = LEFT;  }
          else if( maze[o.x+1][o.y  ] != -1 ) { o.x++; o.d = BOT;   }
          else if( maze[o.x  ][o.y+1] != -1 ) { o.y++; o.d = RIGHT; }
          else                                     { o.x--; o.d = TOP;   }
          break;
        case LEFT :
          if     ( maze[o.x-1][o.y  ] != -1 ) { o.x--; o.d = TOP;   }
          else if( maze[o.x  ][o.y-1] != -1 ) { o.y--; o.d = LEFT;  }
          else if( maze[o.x+1][o.y  ] != -1 ) { o.x++; o.d = BOT;   }
          else                                     { o.y++; o.d = RIGHT; }
          break;
        case TOP  :
          if     ( maze[o.x  ][o.y+1] != -1 ) { o.y++; o.d = RIGHT; }
          else if( maze[o.x-1][o.y  ] != -1 ) { o.x--; o.d = TOP;   }
          else if( maze[o.x  ][o.y-1] != -1 ) { o.y--; o.d = LEFT;  }
          else                                     { o.x++; o.d = BOT;   }
        default: break;
      }    
    }
    maze[o.x][o.y]++;
  }
  while(o.x != o.x_init || o.y != o.y_init);
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (maze[i][j] == -1)
        cout << '#';
      else
        cout << maze[i][j];
    }
    cout << endl;
  }
}
