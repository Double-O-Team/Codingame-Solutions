#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int light_x; // the X position of the light of power
    int light_y; // the Y position of the light of power
    int initial_tx; // Thor's starting X position
    int initial_ty; // Thor's starting Y position
    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();
    swap(light_x, light_y);
    swap(initial_tx, initial_ty);

    // game loop
    string ans = "";
    while (1) {
        int remaining_turns; 
        cin >> remaining_turns; cin.ignore();
        string moveX = "" , moveY = "";
        if(initial_tx < light_x) {initial_tx ++; moveX += "S";}
        else if(initial_tx > light_x) {initial_tx--;moveX += "N";}

        if(initial_ty < light_y) {moveY += "E";initial_ty++;}
        else if(initial_ty > light_y) {moveY += "W";initial_ty--;}
        // ans += moveX + moveY;
        cout<<moveX<<moveY<<endl;
        



    }
}
