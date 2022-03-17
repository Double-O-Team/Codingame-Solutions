#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

vector<int>fizz, buzz, fizzBuzz;
int start = 1;
vector<string>all;

bool valid(int f, int b ,int n){   
    for(int x = start; x < n + start; x++){
        if(x%f==0 and x%b == 0){
            if(all[x] != "FizzBuzz"){return false;}
        }else if(x%f == 0){
            if(all[x] != "Fizz"){return false;}
        }else if(x%b == 0){
            if(all[x] != "Buzz"){return false;}
        }else{
            if(all[x] != to_string(x)){return false;}
        }
    }
    return true;
}

bool notString(string s){
    if(s !="Fizz" and s!="Buzz" and s!="FizzBuzz")return true;
    else return false;
}


int main()
{

    bool flag = false;
    int n;
    cin >> n; cin.ignore();
    all.resize(n+1);
    vector<string>v;
    all.resize(100);

    for (int i = 1; i <= n; i++) {
        string line;
        getline(cin, line);
        if(!flag and notString(line)){
            start = stoi(line)-i+1;
            flag = 1;
        }
        v.push_back(line);
    }
    int idx = 0;
    for(int x = start; x<n+start; x++){
        all[x] = v[idx++];
    }
    for(int x = 1; x<=60; x++){
        for(int y = 1; y<=60; y++){
            if(valid(x, y , n)){
                cout<<x<<" "<<y<<"\n";
                break;
            }
        }
    }
}
