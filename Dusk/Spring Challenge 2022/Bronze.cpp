#include <bits/stdc++.h>
#define ll endl
using namespace std;
vector<pair<int , pair<int, int>>>defs1;
void firstmove(int basex , int basey , int k){
    if(basex == 0 && basey == 0){
        if(k == 0)  cout <<"MOVE 5000 5000 HERO 1"<<ll;
        if(k == 1)  cout <<"MOVE 7000 1000 HERO 2"<<ll;
        if(k == 2)  cout <<"MOVE 1000 7000 HERO 3"<<ll;
    }
    else if(basex == 17630 && basey == 9000){
        if(k == 0)   cout <<"MOVE 14500 2500 HERO 1"<<ll;
        if(k == 1)   cout <<"MOVE 11500 5000 HERO 2"<<ll;
        if(k == 2)   cout <<"MOVE 9630 8000 HERO 3"<<ll;
    }
}
void def1(int basex , int basey , int k){
        if(k == 0)  cout <<"MOVE "<<defs1[0].second.first<<" "<<defs1[0].second.second<<" HERO 1"<<ll;
        if(k == 1)  cout <<"MOVE "<<defs1[0].second.first<<" "<<defs1[0].second.second<<" HERO 2"<<ll;
        if(k == 2)  cout <<"MOVE "<<defs1[0].second.first<<" "<<defs1[0].second.second<<" HERO 3"<<ll;
}
void def2(int basex , int basey , int k) {
    if(k == 0)  cout <<"MOVE "<<defs1[0].second.first<<" "<<defs1[0].second.second<<" HERO 1"<<ll;
    if(k == 1)  cout <<"MOVE "<<defs1[0].second.first<<" "<<defs1[0].second.second<<" HERO 2"<<ll;
    if(k == 2)  cout <<"MOVE "<<defs1[1].second.first<<" "<<defs1[1].second.second<<" HERO 3"<<ll;
}
void def3(int basex , int basey , int k){
    if(k == 0)  cout <<"MOVE "<<defs1[0].second.first<<" "<<defs1[0].second.second<<" HERO 1"<<ll;
    if(k == 1)  cout <<"MOVE "<<defs1[1].second.first<<" "<<defs1[1].second.second<<" HERO 2"<<ll;
    if(k == 2)  cout <<"MOVE "<<defs1[2].second.first<<" "<<defs1[2].second.second<<" HERO 3"<<ll;
}
void windfun(int basex , int basey){
    if(basex == 0 && basey == 0)cout <<"SPELL WIND 17630 9000"<<ll;
    else cout <<"SPELL WIND 0 0"<<ll;
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
        defs1.clear();
        bool wind = false;
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
            int dis = abs(x - base_x) + abs(y - base_y);
            if(threat_for == 1 && type == 0) {
                defs1.push_back({dis , {x , y}});
            }
            if(type == 0&&dis <= 1000 && health >= 1) {
                cerr<<"YES"<<ll;
                wind = true;
            }
        }
        for (int i = 0; i < heroes_per_player; i++) {
             cerr<<defs1.size() <<ll;
             sort(defs1.begin() , defs1.end());
             if(defs1.size() == 0) firstmove(base_x , base_y , i);
             else if(wind) windfun(base_x , base_y) , wind = false;
             else if(defs1.size() == 1) def1(base_x , base_y , i);
             else if(defs1.size() == 2) def2(base_x , base_y , i);
             else if(defs1.size() >= 3) def3(base_x , base_y , i);
             else cout << "WAIT" << endl;
        }
    }
}
