//https://www.codingame.com/ide/puzzle/onboarding
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

/**
 * CodinGame planet is being attacked by slimy insectoid aliens.
 * <---
 * Hint:To protect the planet, you can implement the pseudo-code provided in the statement, below the player.
 **/

int main()
{

    // game loop
    while (1)
    {
        
        string enemy_1; // name of enemy 1
        cin >> enemy_1;
        cin.ignore();
        int dist_1; // distance to enemy 1
        cin >> dist_1;
        cin.ignore();
        string enemy_2; // name of enemy 2
        cin >> enemy_2;
        cin.ignore();
        int dist_2; // distance to enemy 2
        cin >> dist_2;
        cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;


        // You have to output a correct ship name to shoot ("Buzz", enemy1, enemy2, ...)
        if(dist_1 <= dist_2)
            cout << enemy_1 << endl;
        else if(dist_1 > dist_2)
            cout << enemy_2 << endl;
    }
}
