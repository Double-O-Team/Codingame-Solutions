//https://www.codingame.com/ide/puzzle/prefix-code
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<string,char>mp;
ll mx = INT_MIN;
void getchar(string str,int c)
{
    char x = c;
    mp[str] = x;
    mx = max((ll)str.size(),mx);
    //cout<<str<<"->"<<mp[str];
}
int main()
{
    int n;
    cin >> n;
    //   cout<<n<<"\n";
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string b;
        int c;
        cin >> b >> c;
        cin.ignore();
          // cout<<b<<" "<<c<<"\n";
        getchar(b,c);
    }
    string str;
    cin >> str;
    cin.ignore();
     //cout<<str<<"\n";
    if(n == 0)
       {
            cout<<"DECODE FAIL AT INDEX 0";
            return 0;
        }
    ll l = 0, r = 0;
    ll sz = str.size();
    string temp;
    string res = "";
    while(r < sz )//10010001011101010010001
    {
        if(temp.size() > mx)
        {
            cout<<"DECODE FAIL AT INDEX "<<l;
            return 0;
        }
        temp += str[r];
        if(mp.find(temp) != mp.end())
        {
            //cout<<"this"<<temp<<"<---"<<"\n";
            res += mp[temp];
            r++ , l = r;
            temp = "";
        }
        else r++;
    }
    if(temp.size() == 0) cout<<res;
    else cout<<"DECODE FAIL AT INDEX "<<str.size()-1;
}
/*
5
1 97
001 98
000 114
011 99
010 100
10010001011101010010001

--



18
11 32
1001 97
000011 98
000010 99
0011 100
011 101
000001 102
00101 104
000000 73
00100 105
10111 108
1000 110
00011 111
10110 114
010 116
10101 118
00010 120
10100 58
0000001000101011001101110010000111110100110110001001010110100111000011001000101110010101101000101011110111000001111000110000011101000101011110111000000010000110011011001111010011000100101

*/
