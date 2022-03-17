//https://www.codingame.com/ide/puzzle/the-descent
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
        ll mx = INT_MIN, idx = -1;
        for (int i = 0; i < 8; i++)
        {
            int mountain_h; // represents the height of one mountain.
            cin >> mountain_h;
            cin.ignore();
            if(mountain_h > mx)
            {
                mx = mountain_h;
                idx = i;
            }
        }

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        cout << idx << endl; // The index of the mountain to fire on.
    }
}
