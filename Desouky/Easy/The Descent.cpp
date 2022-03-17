#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{

    // game loop
    while (1) {
        int index = 0;
        int val = -1;
        for (int i = 0; i < 8; i++) {
            int mountain_h; // represents the height of one mountain.
            cin>>mountain_h;
            if(mountain_h > val){
                index = i;
                val = mountain_h;
            }        
        }
        cout<<index<<"\n";
    }
}
