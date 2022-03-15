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
 
pair<int ,int >dir[2];
int arr[5000000];
int main()
{
    int a;
    cin >> a; cin.ignore();
    int b;
    cin >> b; cin.ignore();
    int m;
    cin >> m; cin.ignore();
    arr[0]=0;
    int n=0;
    while(1)
    {
        arr[n+1]=(arr[n]*a+b)%m;
        int num=arr[n+1]%4;
        n++;
        if(num==0)dir[0].first++;
        if(num==1)dir[0].first--;
        if(num==2)dir[0].second--;
        if(num==3)dir[0].second++;
        
        if(!dir[0].first&&!dir[0].second)break;
        
    }

    cout << n << endl;
}
