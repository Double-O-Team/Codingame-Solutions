//https://www.codingame.com/ide/puzzle/mime-type
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
}
int main()
{
//    string str = "animated.gif";
//    string sub = str.substr(9,str.size());
//    cout<<sub;

    unordered_map<string,string> mp;
    int n; // Number of elements which make up the association table.
    cin >> n;
    cin.ignore();
    int q; // Number Q of file names to be analyzed.
    cin >> q;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string ext; // file extension
        string mt; // MIME type.
        cin >> ext >> mt;
        ext = TOLOW(ext);
        cin.ignore();
        mp[ext] = mt;
    }
    for (int i = 0; i < q; i++)
    {
        string fname;
        getline(cin, fname); // One file name per line.
        ll idx = -1;
        for(ll j = fname.size() - 1; j>=0; j--)
        {

            if(fname[j] == '.' && j != (fname.size() - 1))
            {
                idx = j+1;
                break;
            }
        }
        string sub = "-";
        if(idx != -1){
        sub = fname.substr(idx,fname.size());
        sub = TOLOW(sub);
        }
        //cout<<"----->"<<sub<<"\n";
        if(mp.find(sub) != mp.end())
        {
            cout<<mp[sub] << "\n";
        }
        else
        {
            cout<<"UNKNOWN"<< "\n";
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;


    // For each of the Q filenames, display on a line the corresponding MIME type. If there is no corresponding type, then display UNKNOWN.
    // cout << "UNKNOWN" << endl;

}

/*
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
}
int main()
{
//    string str = "animated.gif";
//    string sub = str.substr(9,str.size());
//    cout<<sub;

    unordered_map<string,string> mp;
    int n; // Number of elements which make up the association table.
    cin >> n;
    cin.ignore();
    int q; // Number Q of file names to be analyzed.
    cin >> q;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string ext; // file extension
        string mt; // MIME type.
        cin >> ext >> mt;
        cout<<ext << mt << "\n";
        cin.ignore();
        mp[ext] = mt;
    }
    for (int i = 0; i < q; i++)
    {
        string fname;

        getline(cin, fname); // One file name per line.
        ll idx = -1;
         cerr<<fname<<"\n";
        for(ll j = 0; j<fname.size(); j++)
        {

            if(fname[j] == '.')
            {
                idx = j+1;
                break;
            }
        }
        string sub = "-";
        if(idx != -1){
        sub = fname.substr(idx,fname.size());
        sub = TOLOW(sub);
        }
        //cout<<"----->"<<sub<<"\n";
        if(mp.find(sub) != mp.end())
        {
          //  cout<<mp[sub] << "\n";
        }
        else
        {
          //  cout<<"UNKNOWN"<< "\n";
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;


    // For each of the Q filenames, display on a line the corresponding MIME type. If there is no corresponding type, then display UNKNOWN.
    // cout << "UNKNOWN" << endl;

}



*/
