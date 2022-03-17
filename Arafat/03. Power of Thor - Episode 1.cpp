//https://www.codingame.com/ide/puzzle/power-of-thor-episode-1
#include <bits/stdc++.h>
typedef long long ll;
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
    cin >> light_x >> light_y >> initial_tx >> initial_ty;
    cin.ignore();

    ll temp = light_x;
    light_x = light_y;
    light_y = temp;
    temp = initial_tx;
    initial_tx = initial_ty;
    initial_ty = temp;
    // game loop

   
    while (1)
    {
         int remaining_turns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remaining_turns;
        cin.ignore();

        if(light_y == initial_ty)
        {
            if(light_x > initial_tx)
            {
                cout << "S" <<endl;
                initial_tx++;
            }
            else
            {
                cout << "N"<<endl;
                initial_tx--;
            }
        }
        else if(light_x == initial_tx)
        {
            if(light_y > initial_ty)
            {
                cout << "E"<<endl;
                initial_ty++;
            }
            else
            {
                cout << "W"<<endl;
                initial_ty--;
            }
        }
        else
        {
            ll diff = abs(initial_tx-light_x) + abs(initial_ty-light_y);
            if(diff <= remaining_turns)
            {
                if(initial_tx > light_x)
                {
                    cout << "N"<<endl;
                    initial_tx--;
                }
                else
                {
                    cout << "S"<<endl;
                    initial_tx++;
                }

                if(initial_ty > light_y)
                {
                    cout << "W"<<endl;
                    initial_ty--;
                }
                else
                {
                    cout << "E"<<endl;
                    initial_ty++;
                }
            }
            else
            {
                    while(initial_ty != light_y && initial_tx != light_x)
                    {
                        ll Tinitial_tx = initial_tx;
                        ll Tinitial_ty = initial_ty;
                        if(light_x > initial_tx) initial_tx++;
                        else initial_tx--;

                        if(light_y > initial_ty) initial_ty++;
                        else initial_ty--;

                        if(initial_tx > Tinitial_tx && initial_ty > Tinitial_ty) cout <<"SE"<<endl;
                        if(initial_tx < Tinitial_tx && initial_ty < Tinitial_ty)cout << "NW"<<endl;
                        if(initial_tx < Tinitial_tx && initial_ty > Tinitial_ty)cout << "NE"<<endl;
                        if(initial_tx > Tinitial_tx && initial_ty < Tinitial_ty)cout << "SW"<<endl;

                    }
            }

        }
    }

}
