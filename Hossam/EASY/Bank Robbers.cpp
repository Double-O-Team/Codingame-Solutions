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
int arr[3000];
int main()
{
    int r;
    cin >> r; cin.ignore();
    int v;
    cin >> v; cin.ignore();
    
    for (int i = 0; i < v; i++) {
        int c;
        int n;
        cin >> c >> n; cin.ignore();
        int res=c-n;
        int totle=pow(10,n)*pow(5,res);
        sort(arr,arr+r);
        arr[0]+=totle;
    }
    sort(arr,arr+r);
    cout<<arr[r-1]<<endl;

    
}
