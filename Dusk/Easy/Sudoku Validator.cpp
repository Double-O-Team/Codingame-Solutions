#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int sv[9][9];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int n;
            cin>>sv[i][j]; cin.ignore();
        }
    }
    bool bad=false;
    set<int>tmp;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
          if(sv[i][j]>9)
          bad=true;
          tmp.insert(sv[i][j]);
        
        }
        if(tmp.size()!=9)
        bad=true;
        tmp.clear();
    }


    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
          if(sv[j][i]>9)
          bad=true;
          tmp.insert(sv[j][i]);
        
        }
        if(tmp.size()!=9)
        bad=true;
        tmp.clear();
    }



    for(int g=0;g<3;g++)
    {
        for(int h=0;h<3;h++)
        {


    for (int i = g*3; i < g*3+3; i++) {
        for (int j= h*3; j < h*3+3; j++) {
          if(sv[i][j]>9)
          bad=true;
          tmp.insert(sv[i][j]);
        
        }
       
    }
     if(tmp.size()!=9)
        bad=true;
        tmp.clear();

        }

    }





    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
if(bad)
    cout << "false" << endl;
    else
    cout<<"true"<<endl;
}