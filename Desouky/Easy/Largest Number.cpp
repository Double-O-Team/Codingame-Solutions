#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int number;int d;
vector<int>finalAns;

string remove(string s , int idx){
    string str = "";
    for(int x = 0; x<s.size(); x++){
        if(x == idx){
            continue;
        }else{
            str += s[x];
        }
    }
    return str;
}


string toNumTwo(string s, int idx1 , int idx2){
    string ret = "";
    for(int x = 0; x<s.size(); x++){
        if(x == idx1 or x == idx2)continue;
        else ret += s[x];
    }
    return ret;
}


long long toNum(string s){
    long long ret = 0;
    for(int x = 0; x<s.size(); x++){
        ret *= 10;
        ret += (s[x]-'0');
    }
    return ret;
}

long long removeZeroValid(string s){
    for(int x = 0; x<s.size(); x++){
        string ss = remove(s, x);
        long long num = toNum(ss);
        if(num % d == 0)finalAns.push_back(num);
    }
    return -1;
}

long long removeTwoValid(string s){
    string ret = "";
    for(int x = 0; x<s.size(); x++){
        for(int y = x+1; y<s.size(); y++){
            ret = toNumTwo(s, x, y);
            long long val = toNum(ret);
            if(val % d == 0){
               finalAns.push_back(val);
            }
        }
    }
    return -1;
}

int main()
{
    cin >> number; cin.ignore();
    cin >> d; cin.ignore();
    if(number % d == 0){ finalAns.push_back(number);}

    string s = to_string(number);
    long long ans = removeZeroValid(s);
    ans  = removeTwoValid(s);
    finalAns.push_back(0);
    cout<<*max_element(finalAns.begin() , finalAns.end());
}
