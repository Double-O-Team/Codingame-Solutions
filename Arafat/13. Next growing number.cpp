//httpswww.codingame.comidepuzzlenext-growing-number
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool check(string str)
{
    for(ll i =1; i<str.size(); i++)
    {
        if(str[i] < str[i-1]) return 0;
    }
    return 1;
}
int main()
{
    string str;
    getline(cin, str);
  //  cout<<str<<"\n";
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    bool is=check(str);
    //cout<<is;
    if(is)
    {
        ll cur = -1;
        for(ll i =0; i < str.size(); i++)
        {
            if(i == 0)
            {
                if(str[i] == '9')
                {
                    cout<<"11";
                    str[i]='0';
                    cur = 1;
                    continue;
                }
                ll x =  str[i] - '0';
                x++;
                cur = x;
                string temp = to_string(x);
                str[i] = temp[i];

            }
            cout<<cur;
        }
    }else{
        ll cur = -1;
    for(ll i =1; i < str.size(); i++)
    {
        if(str[i] < str[i-1] && cur == -1)
        {
                str[i] = str[i-1];
                cur= str[i];
        }else if(cur != -1) str[i] = cur;
    }
    cout<<str;
    }
}
/*


*/

==========================================================
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n;
    cin >> n;
    n++;
    cout<<n<<"\n";
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    auto str = to_string(n);
    auto it = adjacent_find(str.begin(), str.end(), greater<int>());
    //cout<<*it<<"\n";
    if (it != str.end()) fill(next(it), str.end(), *it);
    cout << str << endl;
}
