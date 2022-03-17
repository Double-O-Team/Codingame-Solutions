//https://www.codingame.com/ide/puzzle/tictactoe
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<string,double>mp;
char arr[3][3];
/*
OO.
...
...
*/
bool check(char sign)
{


    if(arr[0][0]==sign&&arr[0][1]==sign&&arr[0][2]==sign) return 1;

    if(arr[1][0]==sign&&arr[1][1]==sign&&arr[1][2]==sign) return 1;

    if(arr[2][0]==sign&&arr[2][1]==sign&&arr[2][2]==sign) return 1;


    if(arr[0][0]==sign&&arr[1][0]==sign&&arr[2][0]==sign) return 1;

    if(arr[0][1]==sign&&arr[1][1]==sign&&arr[2][1]==sign)return 1;

    if(arr[0][2]==sign&&arr[1][2]==sign&&arr[2][2]==sign) return 1;


    if(arr[0][0]==sign&&arr[1][1]==sign&&arr[2][2]==sign)return 1;

    if(arr[0][2]==sign&&arr[1][1]==sign&&arr[2][0]==sign) return 1;

    return 0;

}
int main()
{

    for (int i = 0; i < 3; i++)
    {
        string line;
        getline(cin, line);
        for(ll j = 0; j<line.size(); j++)
        {
            arr[i][j] = line[j];
        }
    }
    bool done = false;
    for (int i = 0; i < 3; i++)
    {

        for(ll j = 0; j<3; j++)
        {

            if(arr[i][j] != 'O' && arr[i][j] != 'X' && !done)
            {

                arr[i][j]='O';
                bool is =  check('O');
                if(is)  done = true;
                else arr[i][j]='.';
            }
             //cout<<arr[i][j];
        }
       // puts("");
    }
    if(!done) {cout<<"false";return 0;}
     for (int i = 0; i < 3; i++)
    {

        for(ll j = 0; j<3; j++)
        {
         
             cout<<arr[i][j];
        }
        puts("");
    }
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

}


