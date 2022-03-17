//https://www.codingame.com/ide/puzzle/graffiti-on-the-fence
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
unordered_map<ll,ll>mp;
map<ll,ll>mp2;
bool solve(ll n)
{
    for(auto &it:mp)
    {
        ll f = it.first , s = it.second;
        if(n >= f && n < s) return 1;
    }
    return 0;
}
bool solve2(ll st,ll ed)
{
    for(auto &it:mp)
    {
        ll f = it.first , s = it.second;
        if(st >= f && st < s)
        {
            mp[f] = ed;
        }
        else if(ed >= f && ed < s)
        {
                mp[st] = s;
        }
    }
    return 0;
}
int main()
{

    int l;
    cin >> l;
    //cout<<l<<"\n";
    cin.ignore();
    int n;
    cin >> n;
    //cout<<n<<"\n";
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        int st;
        int ed;
        cin >> st >> ed;
        // cout<<st<<" "<<ed<<"\n";
        cin.ignore();
        mp[st] = ed;
        solve2(st,ed);
        //mp2[ed] = st;
        /*
10
2
1 4
3 5
        */
    }
    map<ll,ll>NotFound;
    for (int i = 0; i <=  l; i++)
    {
        if(mp.find(i) != mp.end())
        {
            //cout<<i<<"-> ";
            i = mp[i]-1;
            continue;
        }
//        else
//        {
//            bool is = solve(i);
//            if(is) continue;
//        }
        //cout<<"yes->"<<i<<"\n";
        if(i == 0) NotFound[i] = i+1;
        else NotFound[i] = i-1;
    }
    //for(auto &it:mp) cout<<it.first<<"->"<<it.second<<"\n";
    //puts("");
    vector<ll>v1;
    //cout<<"here";
    for(auto &it:NotFound)
    {
        //cout<<it.first<<"\n";
        v1.push_back(it.first);
    }
    if(NotFound[l] && NotFound.size()== 1)
    {
    cout<<"All painted";
    return 0;
    }
    ll cur = -1;
    for(ll i =0; i<v1.size(); i++) //0 4 6 7 8 9 10
    {
        if(cur == -1) cur = v1[i];
        else if((v1[i] - v1[i-1]) != 1)
        {
            //cout<<"dif->"<<(v1[i] - cur)<<"\n";
            cout<<cur<<" "<<v1[i-1]+1<<"\n";
            cur = v1[i];
            // cout<<cur<<"<-\n";
        }

        if(i == (v1.size()-1) && cur != -1 && cur != v1[i])
        {
        cout<<cur<<" "<<v1[i]<<"\n";
        }


    }
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    // cout << "answer" << endl;
}
/*
10
2
1 4
3 5
*/

