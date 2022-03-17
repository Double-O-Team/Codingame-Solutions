//https://www.codingame.com/ide/puzzle/happy-numbers
#include bitsstdc++.h
typedef long long ll;
using namespace std;


  Auto-generated code below aims at helping you parse
  the standard input according to the problem statement.
 
    void solve(string str)
    {
        ll cnt=0;
        coutstr;
        while(true){
      ll res = 0;
        for( ll i=0;istr.size();i++){
            char c = str[i];
            ll x = c - '0';
        res += (xx);
        }
        cnt++;
        coutresn;
        str= to_string(res);
        if(str == 1)
        {
            cout )n;
            break;
        }
        else if(cnt=1000)
        {
             cout (n;
            break;
        }
        }
        
}
    
    
int main()
{
    int n;
    cin  n; cin.ignore();
    for (int i = 0; i  n; i++) {
        string x;
        getline(cin, x);
        solve(x);
    }
    
     Write an answer using cout. DON'T FORGET THE  endl
     To debug cerr  Debug messages...  endl;

    cout  23 )  endl;
}
