//https://www.codingame.com/ide/puzzle/isbn-check-digit
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
SBN-10 check digit is calculated by Modulus 11 with decreasing weights on
the first 9 digits.
Example: 030640615?
0×10 + 3×9 + 0×8 + 6×7 + 4×6 + 0×5 + 6×4 + 1×3 + 5×2 = 130.
130 / 11 = 11 remainder 9.
Check digit is the value needed to add to the sum to make it dividable by 11
. In this case it is 2.
So the valid ISBN is 0306406152.
In case 10 being the value needed to add to the sum, we use X (upper case X)
 as the check digit instead of 10.
*/
bool solve(string str)
{
    if(str.size() == 10)
    {
        ll res = 0, num = 10;
        for(ll i =0; i<str.size()-1; i++)
        {
            if(!(str[i] >= '0' && str[i] <= '9')) return 0;
            ll digit = str[i] - '0';
            res += (digit * num);
            num--;
        }
        // cout<<res;
        if(res % 11 != 0)
        {
            // cout<<"dd";
            if(str[str.size()-1] != 'X') res+= (str[str.size()-1] - '0');
            else res+= 10;
            if(res % 11 == 0) return 1;
            return 0;

        }
        else if(res % 11 == 0 && str[str.size()-1] == '0') return 1;
        return 0;
    }
    else if(str.size() == 13)
    {
        ll res = 0, num = 10;
        for(ll i =0; i<str.size()-1; i++)
        {
            if(!(str[i] >= '0' && str[i] <= '9')) return 0;
            ll digit = str[i] - '0';
            if(i & 1) res += (digit * 3);
            else res += (digit * 1);
        }
        // cout<<res;
        if(res % 10 != 0)
        {
            if(str[str.size()-1] != 'X') res+= (str[str.size()-1] - '0');
            else res+= 10;
            if(res % 10 == 0) return 1;
            return 0;

        }
        else if(res % 10 == 0 && str[str.size()-1] == '0') return 1;
        return 0;
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    //cout<<n<<"\n";
    cin.ignore();
    vector<string> res;
    for (int i = 0; i < n; i++)
    {
        string isbn;
        getline(cin, isbn);
        //cout<<isbn<<"\n";
        bool is = solve(isbn);
        if(!is) res.push_back(isbn);
        // cout<<is;
    }
    cout<<res.size()<<" invalid:\n";
    for(ll i = 0; i<res.size(); i++)
    {
        cout<<res[i]<<"\n";
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    //  cout << "answer" << endl;
}
