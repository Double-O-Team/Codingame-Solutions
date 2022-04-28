#include <bits/stdc++.h>

using namespace std;
#define ll endl

 void fmove(int basex , int basey , int k){
    if(basex == 0 && basey == 0){
        if(k == 0)  cout <<"MOVE 4242 4242 HERO 1"<<ll;
        if(k == 1)  cout <<"MOVE 6000 0  HERO 2"<<ll;
        if(k == 2)  cout <<"MOVE 0 6000 HERO 3"<<ll;
    }
    else if(basex == 17630 && basey == 9000){
        if(k == 0)   cout <<"MOVE 17630 3000 HERO 1"<<endl;
        if(k == 1)   cout <<"MOVE 13470 5000 HERO 2"<<endl;
        if(k == 2)   cout <<"MOVE 11630 9000 HERO 3"<<endl;
    }
}

int main()
{
    int base_x; // The corner of the map representing your base
    int base_y;
    cin >> base_x >> base_y; cin.ignore();
    int heroes_per_player; // Always 3
    cin >> heroes_per_player; cin.ignore();
   
    // game loop
    while (1) {
         map<int ,pair<int, int>> attack;
        for (int i = 0; i < 2; i++) {
            int health; // Each player's base health
            int mana; // Ignore in the first league; Spend ten mana to cast a spell
            cin >> health >> mana; cin.ignore();
        }
        int entity_count; // Amount of heros and monsters you can see
        cin >> entity_count; cin.ignore();
        for (int i = 0; i < entity_count; i++) {
            int id; // Unique identifier
            int type; // 0=monster, 1=your hero, 2=opponent hero
            int x; // Position of this entity
            int y;
            int shield_life; // Ignore for this league; Count down until shield spell fades
            int is_controlled; // Ignore for this league; Equals 1 when this entity is under a control spell
            int health; // Remaining health of this monster
            int vx; // Trajectory of this monster
            int vy;
            int near_base; // 0=monster with no target yet, 1=monster targeting a base
            int threat_for; // Given this monster's trajectory, is it a threat to 1=your base, 2=your opponent's base, 0=neither
            cin >> id >> type >> x >> y >> shield_life >> is_controlled >> health >> vx >> vy >> near_base >> threat_for; cin.ignore();
            int dis=abs(base_x-x)+abs(base_y-y);
                 if (threat_for == 1) attack[dis]={x,y};
        }
        for (int i = 0; i < heroes_per_player; i++) {
                if(attack.size() == 0) {
                  
                        fmove(base_x,base_y,i);
                }
                else if(attack.size() >= 1) {
                    if(i == 0)   cout <<"MOVE "<<attack.begin()->second.first <<" " <<attack.begin()->second.second<<" شيكا "<<ll;
                    if(i == 1)   cout <<"MOVE "<<attack.begin()->second.first <<" " <<attack.begin()->second.second<<" شيكا "<<ll;
                    if(i == 2)   cout <<"MOVE "<<attack.begin()->second.first <<" " <<attack.begin()->second.second<<" عمرو زكي "<<ll;
                }
        }
    }
}
