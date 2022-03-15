#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int w;
    cin >> w; cin.ignore();
    int h;
    cin >> h; cin.ignore();
    string t;
    getline(cin, t);
string  x;
int curent=0;
int turn=0;
    for(int i=0;i<t.length();i++)
    {
        if(t[i]!=' ')
       x+=t[i];
       else
       {
           
           int tmp = stoi(x);
      
           while(tmp--)
           {
               if(curent ==0)
               {
                   cout<<"|";
               }
               if(turn%2==0)
               cout<<"*";
               else
               cout<<" ";
               curent++;


               if(curent== w)
               {
                   cout<<"|";
                   curent=0;
                   cout<<endl;

               }
               
           }
           x.clear();
           turn++;
       }
       
    }
      int tmp = stoi(x);
    
           while(tmp--)
           {
            

               if(curent ==0)
               {
                   cout<<"|";
               }
               if(turn%2==0)
               cout<<"*";
               else
               cout<<" ";
               curent++;


               if(curent== w)
               {
                   cout<<"|";
                   curent=0;
                   cout<<endl;

               }
               
           }


}