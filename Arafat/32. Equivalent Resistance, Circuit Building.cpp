//https://www.codingame.com/ide/puzzle/equivalent-resistance-circuit-building
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<string,double>mp;
/*
N = 3
A 24
B 8
C 48
[ ( ( A B ) [ C A ] ) ]


-----

7
Alfa 1
Bravo 1
Charlie 12
Delta 4
Echo 2
Foxtrot 10
Golf 8
( Alfa [ Charlie Delta ( Bravo [ Echo ( Foxtrot Golf ) ] ) ] )Equivalent Resistance



[ ( A B ) [ C A ] ]Equivalent Resistance
  string str = "Equivalent[here]Resistance" ;
    str.erase(str.begin()+10,str.begin()+16);
    cout<<str<<"\n";
    str.insert(10,"sss");
    cout<<str;


3
A 24
B 8
C 48
[ ( A B ) [ C A ] ]


2
A 20
B 10
( A B )

7
Alfa 1
Bravo 1
Charlie 12
Delta 4
Echo 2
Foxtrot 10
Golf 8
( Alfa [ Charlie Delta ( Bravo [ Echo ( Foxtrot Golf ) ] ) ] )








3
Alef 30
Bet 20
Vet 10
( Alef [ ( Bet Bet Bet ) ( Vet [ ( Vet Vet ) ( Vet [ Bet Bet ] ) ] ) ] )



3
Alef 30
B[et 20
Vet 10
( Alef [ ( B[et B[et B[et ) ( Vet [ ( Vet Vet ) ( Vet [ B[et B[et ] ) ] ) ] )









2
A 10
B 30
( ( A A ) [ A A ] )

*/
void solve(string str)
{
    string sss = "1234567890zxcvbnmsfagdfkfpfl";
    double res = 0;

    while(str.size())
    {
        if(str[0] != '[' && str[0] != '(') break;
        ll st = -1, ed = -1;
        for(ll i = 0; i<str.size(); i++)
        {
            if(i == 0){st = i;continue;}
            if(str[i] == '[' || str[i] == '(' )
            {
                if (str[i+1] == ' ' && str[i-1] == ' ') st = i;
                else continue;
            }
            if(str[i] == ']' || str[i] == ')' && st != -1)
            {
                if(str[i-1] != ' ' || str[i+1] != ' ' && i != (str.size()-1)) continue;
                //cout<<"dd";
                double temp_res = 0;
                ed = i;
                  //cout<<st<<"\n";
                vector<string> name;
                string temp ="", newname;
                for(ll j = st+1; j<ed; j++)
                {
                    //cout<<"ss"<<"\n";
                    if(str[j] != ' ') temp += str[j];
                    else if(str[j] == ' ' && temp.size() != 0)
                    {
                        //cout<<"dd";
                        name.push_back(temp);
                       // cout<<temp<<"<-\n";
                        newname+=temp;
                        temp="";
                    }
                }
                //cout<<"here\n";
                for(ll j = 0; j<name.size(); j++)
                {
                   // cout<<name[j]<<"\n";
                    double value = mp[ name[j] ];
                    if(str[st] == '(')
                    {
                        temp_res += value;
                    }
                    else
                    {
                        temp_res += (1*1.0/value*1.0);
                    }

                }
                if(str[st] == '[')
                {
                    temp_res = (1/(temp_res*1.0));
                }
               // cout<<"temp_res="<<temp_res<<"\n";

                //newname+=str[st];
                srand(time(0));

                 string  s = to_string(temp_res);
                  newname +=s;
                mp[newname] = temp_res;
               // cout<<"value0->"<<temp_res<<"\n";
                res =temp_res;
                //   cout<<"new="<<newname<<"\n";
               //system("pause");
                str.erase(str.begin()+st,str.begin()+ed+1);
                str.insert(st,newname);
               // cout<<str<<"\n";
                //system("pause");
                break;
            }
        }
    }
    cout << fixed << setprecision(1) << res;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    //cout<<n<<"\n";
    for (int i = 0; i < n; i++)
    {
        string name;
        int r;
        cin >> name >> r;
        cin.ignore();
        mp[name] = r;
        //cout<<name<<" "<<r<<"\n";
    }
    string circuit;
    getline(cin, circuit);
    solve(circuit);
    //cout<<circuit<<"";
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
//

}


