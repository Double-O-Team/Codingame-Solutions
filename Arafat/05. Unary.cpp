//https://www.codingame.com/ide/puzzle/unary
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
string ToBinary(int num)
{
    string res = "";
    while(num)
    {
            if(num & 1)
            {
                res +="1";
                num /=2;
            }
            else
        {    
             res +="0";
                num /=2;
        }
    }
        string res2= "";
   ll diff = abs((ll)res.size() - 7);
        while(diff--)
        {
            res2+="0";
    
        }
   res+=res2;
     reverse(res.begin(), res.end());
    return res;
}
/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string message;
    getline(cin, message);
 //cout << "Hello world!";
    string str;
    for(ll i =0;i<message.size();i++){
    str += ToBinary(message[i]);
    }
    //cout<<str<<endl;
    
    for(ll i =0;i<str.size();)
    {
            if(str[i] == '1')    
            {
                cout<<"0 0";
                ll idx = i+1;
                while(true)
                {
                    if(str[idx] == '1' && idx < str.size())
                    {
                        cout<<"0";
                        idx++;
                    }
                    else break;
                }
                i = idx;
               if(i != str.size())  cout<<" ";
                
            } else
            {
                cout<<"00 0";
                   ll idx = i+1;
                while(true)
                {
                    if(str[idx] == '0' && idx < str.size())
                    {
                        cout<<"0";
                        idx++;
                    }
                    else break;
                   
                }
                i = idx;
                    if(i != str.size()) cout<<" ";
               
            }
    }
    
    return 0;
}
