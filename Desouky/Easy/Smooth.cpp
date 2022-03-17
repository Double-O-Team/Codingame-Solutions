#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        long long f;
        cin >> f; cin.ignore();
        while(1){
            if(f%5 == 0)f/=5;
            else if(f%3 == 0)f/=3;
            else if(f%2 == 0)f/=2;
            else if(f == 1)break;
            else break;
        }
        if(f == 1)cout<<"VICTORY\n";
        else cout<<"DEFEAT\n";
    }
}
