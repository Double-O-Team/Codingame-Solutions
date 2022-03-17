#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        string card;
        getline(cin, card);
        long long stp1 = 0 , stp2 = 0;
        for(int x = 0; x<card.size(); x+=2){
            if(card[x] == ' ')x++;
            long long val = (card[x]-'0')*2;
            stp1 += (val>=10)?val-9:val;
            stp2 += (card[x+1]-'0');
        }
        if((stp1+stp2) %10 == 0)cout<<"YES\n";
        else cout<<"NO\n";

    }


}
