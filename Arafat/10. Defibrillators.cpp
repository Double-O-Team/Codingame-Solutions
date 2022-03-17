//https://www.codingame.com/ide/puzzle/defibrillators
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
string TOLOW(string str)
{
    for(ll i =0; i<str.size(); i++)
    {
        str[i] = tolower(str[i]);
    }
    return str;
    cout<<stod("99.9");
}

long double getlat(string str)
{
    cout<<fixed<<setprecision(15);
    ll idx = -1;
    for(ll i = str.size()-1; i>=0; i--)
    {
        if(str[i] == ',') str[i] = '.';
        if(str[i] == ';')
        {
            idx = i;
            break;
        }
    }
    //cout<<"->>>>"<<idx<<endl;
    string res = str.substr(idx+1,str.size());
    double x = stold(res);
    return x;
}
long double getlon(string str)
{
    cout<<fixed<<setprecision(15);
    ll idxstart = -1, idxend = -1;
    for(ll i = str.size() - 1; i >= 0;i--)
    {
        if(str[i] == ',') str[i] = '.';
        if(str[i] == ';' && idxend != -1)
        {
            idxstart = i;
            break;
        }
        else if(str[i] == ';' && idxend == -1)
        {
            idxend = i;
        }
    }
    // cout<<"->>"<<idxend<<"\n";
    string res = str.substr(idxstart+1,idxend - idxstart -1);
    //cout<<res;
    long double x = stold(res);
    return x;
}
string getstring(string str)
{
    ll idxstart = -1, idxend = -1;
    for(ll i = 0; i < str.size(); i++)
    {
        if(str[i] == ';' && idxstart == -1)
        {
            idxstart = i;
        }
        else if(str[i] == ';' && idxstart != -1)
        {
            idxend = i;
            break;
        }
    }
    string res = str.substr(idxstart+1,idxend - idxstart -1);
    //cout<<res;
    return res;
}
string change(string str)
{
    for(ll i = 0; i < str.size(); i++)
    {
        if(str[i] == ',') str[i] = '.';
    }
    return str;
}
int main()
{
    cout<<fixed<<setprecision(15);
    string lon;
    cin >> lon;
    cin.ignore();
    string lat;
    cin >> lat;
    cin.ignore();
    int n;
    cin >> n;
    cin.ignore();
    lon=change(lon);
    lat=change(lat);
    double long lon1 = stold(lon);
    double long lat1 = stold(lat);
   // cout<<lon1<<"\n"<<lat1<<"\n";
    long double Shortest = INT_MAX;
    string res;
    for (int i = 0; i < n; i++)
    {
        string defib;
        getline(cin, defib);
        long double lat2 = getlat(defib);
       // cout<<lat2<<"\n";
        long double lon2 = getlon(defib);
        //cout<<lon2<<"\n";
        string text =  getstring(defib);
        double long x = (lon2 - lon1) * cos((lon2 + lon1)/2);
        double long y = lat2 - lat1;
        double long d = sqrt( pow(x,2) + pow(y,2)) * 6371;
        //cout<<d ;
        if(d < Shortest)
        {
            Shortest = d;
            res = text;
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << res << endl;
}

//3,879483
//43,608177
//stold
//
//3,87952263361082;43,6071285339217
//
//3,89652239197876;43,5987299452849
//
//3,87388031141133;43,6395872778854
