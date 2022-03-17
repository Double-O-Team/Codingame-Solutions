#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

struct player{
    int number;
    string sign;
    vector<int>enemy;
    player(int n, string s, vector<int>v){
        number = n;
        sign = s;
        enemy = v;
    }
    player(){};
};
vector<player> one;

player winner(player &one, player &two){
    if(one.sign == "R"){
        if(two.sign == "R"){
            if(one.number<two.number){
                one.enemy.push_back(two.number);
                return one;
            }else{
                two.enemy.push_back(one.number);
                return two;
            }
        }else if(two.sign == "L" or two.sign == "C"){
            one.enemy.push_back(two.number);
            return one;
        }else{
            two.enemy.push_back(one.number);
            return two;
        }
    }else if(one.sign == "P"){
        if(two.sign == "P"){
            if(one.number<two.number){
                one.enemy.push_back(two.number);
                return one;
            }else{
                two.enemy.push_back(one.number);
                return two;
            }
        }else if(two.sign == "R" or two.sign == "S"){
            one.enemy.push_back(two.number);
            return one;
        }else{
            two.enemy.push_back(one.number);
            return two;
        }
    }else if(one.sign == "C"){
        if(two.sign == "C"){
            if(one.number<two.number){
                one.enemy.push_back(two.number);
                return one;
            }else{
                two.enemy.push_back(one.number);
                return two;
            }
        }else if(two.sign == "L" or two.sign == "P"){
            one.enemy.push_back(two.number);
            return one;
        }else{
            two.enemy.push_back(one.number);
            return two;
        }
    }else if(one.sign == "L"){
        if(two.sign == "L"){
            if(one.number<two.number){
                one.enemy.push_back(two.number);
                return one;
            }else{
                two.enemy.push_back(one.number);
                return two;
            }
        }else if(two.sign == "S" or two.sign == "P"){
            one.enemy.push_back(two.number);
            return one;
        }else{
            two.enemy.push_back(one.number);
            return two;
        }
    }else if(one.sign == "S"){
        if(two.sign == "S"){
            if(one.number<two.number){
                one.enemy.push_back(two.number);
                return one;
            }else{
                two.enemy.push_back(one.number);
                return two;
            }
        }else if(two.sign == "R" or two.sign == "C"){
            one.enemy.push_back(two.number);
            return one;
        }else{
            two.enemy.push_back(one.number);
            return two;
        }
    }
}

vector<player> solve(vector<player>&v){
    vector<player>temp;
    for(int x = 0; x<v.size(); x+=2){
        player firstPlayer = v[x];
        player secondPlayer = v[x+1];
        temp.push_back(winner(firstPlayer, secondPlayer));
    }
    return temp;
}

int main()
{
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int numplayer;
        string signplayer;
        cin >> numplayer >> signplayer; cin.ignore();
        one.push_back(player(numplayer , signplayer , vector<int>()));
    }
    while(1){
        one = solve(one);
        if(one.size() == 1)break;
    }
    cout<<one[0].number<<endl;
    for(int x = 0; x<one[0].enemy.size(); x++){
        cout<<one[0].enemy[x];
        if(x != one[0].enemy.size()-1)cout<<" ";
    }

}
