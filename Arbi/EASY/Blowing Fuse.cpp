#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    int m;
    int c;
    cin >> n >> m >> c; cin.ignore();
    vector <int> a(n + 1);
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    vector <int> b(m);
    for(int i = 0;i < m;i++)cin >> b[i];
    map<int , int> turn;
    for(int i = 1;i <= n;i++){
        turn[i] = 0;
    }
    int sum = c , minimum = c;
    for(int i = 0;i < m;i++){
        if(turn[b[i]]){
         sum += a[b[i]];
        } else {
         sum -=  a[b[i]]; 
        }
        if(sum < 0){
         cout << "Fuse was blown.\n";
         return 0;
        }
        minimum = min(minimum , sum);
        turn[b[i]] ^= 1;
    }
    cout << "Fuse was not blown." << endl;
    cout << "Maximal consumed current was " << c - minimum << " A." << endl;

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    //cout << "Fuse was not blown." << endl;
    //cout << "Maximal consumed current was XX A." << endl;
}
