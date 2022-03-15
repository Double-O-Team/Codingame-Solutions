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

    // game loop
    while (1) {
        int remaining_turns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remaining_turns; cin.ignore();
        if(initial_tx == light_x and initial_ty == light_y)break;
        else if(initial_tx < light_x and initial_ty < light_y){
         ++initial_tx;
         ++initial_ty;
         cout << "SE\n";
        }else if(initial_tx < light_x and initial_ty > light_y) {
         ++initial_tx;
         --initial_ty;
         cout << "NE\n";
        }else if(initial_tx > light_x and initial_ty < light_y) {
         --initial_tx;
         ++initial_ty;
         cout << "SW\n";
        }else if(initial_tx > light_x and initial_ty > light_y) {
         --initial_tx;
         --initial_ty;
         cout << "NW\n";
        }else if(initial_tx < light_x) {
         ++initial_tx;
         cout << "E" << endl;
        } else if(initial_tx > light_x) {
         --initial_tx;
         cout << "W" << '\n';
        } else if(initial_ty < light_y) {
          ++initial_ty;
          cout << "S" << '\n';
        } else if(initial_ty > light_y) {
         --initial_ty;
         cout << "N" << '\n';
        }
    }
}
