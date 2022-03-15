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
 
 int c(char ch)
 {
     int sum=ch-'0';
     sum*=2;
     if(sum>9)sum-=9;
     return sum;
 }
 int r(char ch)
 {
     int num=ch-'0';
     return num;
 }
vector<string>v;

int main()
{
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        string card;
        getline(cin, card);
       
        int sum=c(card[0])+c(card[2])+c(card[5])+c(card[7])+c(card[10])+c(card[12])+c(card[15])+c(card[17]);
        int sum2=r(card[1])+r(card[3])+r(card[6])+r(card[8])+r(card[11])+r(card[13])+r(card[16])+r(card[18]);
        ((sum+sum2)%10==0)?v.push_back("YES"):v.push_back("NO");
    }
    for(auto i :v)cout<<i<<endl;
  
   

   
}
