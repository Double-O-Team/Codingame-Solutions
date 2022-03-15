#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
bool solve(string str)
{
    for(int i=0;i<100;i++){
    int sum=0;
    for(auto ch : str)
    {
        int num=ch-'0';
        num=num*num;
        sum+=num;
    }
    str="";
    if(sum==1)return true;
    while(sum)
    {
        int tmp=sum%10;
        str+=tmp+'0';
        sum/=10;
    }
    }
    return false;
}
int main()
{
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        string x;
        getline(cin, x);
        bool res=solve(x);
        cout<<x<<" ";
        (res)?cout<<":)":cout<<":(";
        cout<<endl;
    }

   
}
