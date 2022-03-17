#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
string plusOne(string s){
    string ret = "";
    bool allNine = true;
    
    for(int x = 0; x<s.size(); x++){
        if(s[x] != '9')allNine = false;
    }

    if(!allNine){
        for(int x = s.size()-1; x>=0; x--){
            if(s[x]<'9'){
                s[x]++;
                return s;
            }else {
                s[x] = 0;
            }
        }
    }else{
        ret += '1';
        for(int x = 0; x<s.size(); x++){
            ret += '0';
        }
        return ret;
    }
    return ret;
}


bool incresingNumber(string s){
    for(int x = 1;x<s.size(); x++){
        if(s[x] < s[x-1])return false;
    }
    return true;
}


int main()
{
    string n;
    getline(cin, n);
    n = plusOne(n);
    if(incresingNumber(n)) cout<<n;
    else {
        bool flag = false;
        for(int x = 1; x<n.size(); x++){
            if(!flag){
                if(n[x] >= n[x-1])continue;
                else{
                    n[x] = n[x-1];
                    flag = true;
                }
            }else n[x] = n[x-1];
        }
    }
    cout<<n;

}
