#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

#define ll long long int
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int l;
    cin >> l; cin.ignore();
    int h;
    cin >> h; cin.ignore();
    string t;
    getline(cin, t);
    for (int i = 0; i < h; i++) {
        string row;
        getline(cin, row);
        for(int j=0;j<t.length();j++)
        {
            ll index=0;
//             if (t[i]==' ')
//            {
// cout<<" ";
// continue;

//            } 
if(islower(t[j]))
{
t[j]=toupper(t[j]);
}
            
            index=t[j]-'A';
            if(t[j]>='A'&&t[j]<='Z')
            {

            }
            else
            {
                index=26;
            }

            string output= row.substr(index*l,l);
            cout<<output;

        }
        cout<<endl;
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    
}
