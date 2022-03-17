//https://www.codingame.com/ide/puzzle/encryptiondecryption-of-enigma-machine
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string shift(string message,ll num)
{

    for(ll i = 0; i<message.size(); i++)
    {
        ll x = ( (message[i] - 'A') + num + i) % 26;
        message[i] = 'A' + x;
    }
    //cout<<"this"<<message<<"";
    return message;
}
string undoshift(string message,ll num)
{

    for(ll i = 0; i<message.size(); i++)
    {
        ll x = ( (message[i] - 'A') - num - i) ;
            if(x < 0)
            {
                x = abs(x) % 26;
                x = 26 - x;
            }
        message[i] = 'A' + (x % 26);
    }
    //cout<<"this"<<message<<"";
    return message;
}
ll getorder(char c,string rotor)
{
    for(ll i =0;i<rotor.size();i++)
    {
        if(rotor[i] == c)
        {
             return i;
        }
    }
}
int main()
{
    map<char,ll> Alpha;
    for(char c = 'A'; c <= 'Z'; c++)
    {
        Alpha[c] = c - 'A';
        //cout<<c<<"->"<<Alpha[c]<<"\n";
    }

    string operation;
    getline(cin, operation);
    ll pseudo_random_number;
    cin >> pseudo_random_number;
    cin.ignore();
   // cout<<pseudo_random_number<<"\n";
    string rotor[3];
    for (int i = 0; i < 3; i++)
    {
        string str;
        getline(cin, str);
        //cout<<str<<"\n";
        rotor[i] = str;
    }
    string message;
    getline(cin, message);
    //cout<<message<<"\n";
    if(operation == "ENCODE")
    {
        string shifted  = shift(message,pseudo_random_number);
        for(ll j =0; j<3; j++)//EFG
        {
            for(ll i = 0; i<shifted.size(); i++)
            {
                ll idx = Alpha[ shifted[i] ];
                shifted[i] = rotor[j][idx];
            }
        }
        cout<<shifted<<"";
    }//KQF
    else
    {
        for(ll j =2; j>=0; j--)//EFG
        {
            for(ll i = 0; i<message.size(); i++)
            {
                ll order = getorder( message[i] ,rotor[j]);
                //cout<<order;
                //ll idx = Alpha[ message[i] ];
                message[i] = 'A' + order;
            }
           // cout<<message<<"\n";
        }
        //cout<<message<<"<---\n";
        string res = undoshift(message,pseudo_random_number);
        cout<<res;
    }


}


/*
DECODE
4
BDFHJLCPRTXVZNYEIWGAKMUSQO
AJDKSIRUXBLHWTMCQGZNPYFVOE
EKMFLGDQVZNTOWYHXUSPAIBRCJ
KQF



DECODE
5
BDFHJLCPRTXVZNYEIWGAKMUSQO
AJDKSIRUXBLHWTMCQGZNPYFVOE
EKMFLGDQVZNTOWYHXUSPAIBRCJ
XPCXAUPHYQALKJMGKRWPGYHFTKRFFFNOUTZCABUAEHQLGXREZ
*/
