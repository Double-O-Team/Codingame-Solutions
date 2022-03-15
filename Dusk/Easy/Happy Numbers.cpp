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
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        string x;
        getline(cin, x);
        string tmp =x;
        string ans=x;
        for(int j=0;j<1e5;j++)
        {
            long long ans=0;
            for(int w=0;w<x.length();w++)
            {
                int d=x[w]-'0';
                ans+=pow(d,2);
            }
            x.clear();
            while(ans!=0)
            {
                x+=(ans%10)+'0';

               ans/=10;
            }
        }
        if(x=="1")
        cout<<tmp<<" :)";
        else
        cout<<tmp<<" :(";
        cout<<endl;

    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

   
}
