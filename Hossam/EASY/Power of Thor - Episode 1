#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

int main()
{
    int light_x; // the X position of the light of power
    int light_y; // the Y position of the light of power
    int initial_tx; // Thor's starting X position
    int initial_ty; // Thor's starting Y position
    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();
    int x=initial_tx;
    int y=initial_ty;
    int lx=light_x;
    int ly=light_y;
    // game loop
    while (1) {
        int remaining_turns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remaining_turns; cin.ignore();
        if(x>lx&&y>ly){x-=1,y-=1;cout<<"NW\n";}
        else if(x>lx&&y<ly){x-=1,y+=1;cout<<"SW\n";}
        else if(x<lx&&y<ly){x+=1,y+=1;cout<<"SE\n";}
        else if(x<lx&&y>ly){x+=1,y-=1;cout<<"NE\n";}
        else if(x>lx){x-=1;cout<<"W\n";}
        else if(x<lx){x+=1;cout<<"E\n";}
        else if(y>ly){y-=1;cout<<"N\n";}
        else if(y<ly){y+=1;cout<<"S\n";}
    }
    
}
