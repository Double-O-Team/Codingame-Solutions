#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;
bool check(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==',')
            return true;
    }
    return false;
}
struct player
{
    string name;
    vector<string>killed;
    vector<string>killedBy;

};
int index(vector<player>a,string name)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i].name==name)
            return i;
    }
    return -1;
}


int main()
{
    int tributes;
    cin >> tributes; cin.ignore();
    vector<player>match;
    for (int i = 0; i < tributes; i++) {
        string player_name;
        getline(cin, player_name);
        player x;
        x.name=player_name;
        match.push_back(x);
    }
    int turns;
    cin >> turns; cin.ignore();
    for (int i = 0; i < turns; i++) {
        string info;
        getline(cin, info);
        string x=info .substr(0,info.find_first_of(' '));
        int indexForKiller=index(match,x);
      
        if(check(info))
        {
            string tmp;
            for(int indexString =x.size()+8;indexString<info.length();indexString++)
            {
                if(info[indexString]!=' '&&info[indexString]!=',')
                    tmp+=info[indexString];
                else if(info[indexString]==' ')
                {
            
                 int tmpIndex=index(match,tmp);
                 match[indexForKiller].killed.push_back(tmp);
                 match[tmpIndex].killedBy.push_back(x);
                 tmp.clear();
                }

            }
      
            int tmpIndex=index(match,tmp);
            match[indexForKiller].killed.push_back(tmp);
            match[tmpIndex].killedBy.push_back(x);
        } else
        {
            string y=info .substr(info.find_last_of(' ')+1);
            int tmpIndex=index(match,y);
            match[indexForKiller].killed.push_back(y);
            match[tmpIndex].killedBy.push_back(x);
 
        }


    }

    // for(int i=0;i<match.size();i++)
    // cout<<match[i].name<<" ";
    // cout<<endl;
    for(int i=0;i<match.size();i++)
    {
        for(int j=0;j<match.size()-1;j++)
        {
            if(match[j].name>match[j+1].name)
            {
                // cout<<match[i].name<<" "<<match[j].name<<endl;
                player y=match[j];
                match[j]=match[j+1];
                match[j+1]=y;
                // cout<<match[i].name<<" "<<match[j].name<<endl;
            }
        }
    }
    // for(int i=0;i<match.size();i++)
    // cout<<match[i].name<<" ";
    // cout<<endl;

for(int i=0;i<match.size();i++)
{
 cout << "Name: " ;
 cout<<match[i].name;
 cout<<endl;
     cout << "Killed: " ;
 if(match[i].killed.size()==0)
 cout<<"None"<<endl;
 else if(match[i].killed.size()==1)
 cout<<match[i].killed[0]<<endl;

 else
 {
     set<string>names;
      for(int j=0;j<match[i].killed.size();j++)
     {
         
         names.insert(match[i].killed[j]);

     }
     int count=0;
     for(auto it:names)
     {
         if(count!=0)
         cout<<", ";
         cout<<it;
         count++;

     }
     cout<<endl;
 }

    cout << "Killer: ";
    if(match[i].killedBy.size()==0)
    cout<<"Winner";
    else
     cout<<match[i].killedBy[0];
     if(i!=match.size()-1)
     cout<<endl;
     cout<<endl;
}
   
}
