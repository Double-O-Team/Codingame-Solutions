//https://www.codingame.com/ide/puzzle/how-time-flies
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dd, mm, yy;
ll END_dd, END_mm, END_yy;
/*
17.02.2024
28.02.2032
*/
void convert(string str,ll type)
{
    string d, m, y;
    ll idx = 1;
    string temp;
    for(ll i =0; i<str.size(); i++)
    {

        if(str[i] == '.')
        {
            if(idx == 1)
            {
                d = temp;
                idx++;
                temp="";
            }
            else if(idx == 2)
            {
                m = temp;
                idx++;
                temp="";
            }
        }
        else temp += str[i];

    }
    y = temp;
    //  cout<<d<<"   "<<m<<"  "<<y<<"\n";
    if(type == 1)
    {
        istringstream(d)>>dd;
        istringstream(m)>>mm;
        istringstream(y)>>yy;
    }
    else
    {
        istringstream(d)>>END_dd;
        istringstream(m)>>END_mm;
        istringstream(y)>>END_yy;
    }
}
ll shit = 0, rest = 0;
bool isleap(ll year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) return 1;
    return 0;
}
ll solve(ll day, ll month, ll year)
{
    ll res = 0;
    if(month == 1 || month == 3 || month == 5 || month == 7 ||month == 8|| month == 10|| month ==  12)
    {
        res =  31 - day;
        if(day == 1) res++;
        if(day != 1) rest = res;
    }
    else if(month == 4 || month == 6 || month == 9 || month ==  11)
    {
        res = 30 - day;
        if(day == 1) res++;
        if(day != 1) rest = res;
    }
    else
    {
        if(isleap(year))
        {
            // cout<<"here"<<year<<"\n";
            res = 29 - day  ;
        }
        else
        
            res = 28 - day;
            if(day == 1) res++;
        
        if(day != 1) rest = res;
    }
    if(day == 1)shit++;
    return res;
}
void check(ll month,ll day, ll year)
{

    if(month == 1 || month == 3 || month == 5 || month == 7 ||month == 8|| month == 10|| month ==  12)
    {
        if(day == 31) shit++;
    }
    else if(month == 4 || month == 6 || month == 9 || month ==  11)
    {
        if(day == 31) shit++;
    }
    else
    {
        if(isleap(year))
        {
            if(day >= 29) shit++;
        }
        else
        {
            if(day >= 28) shit++;
        }
    }

}
/*
29.02.2024
1.04.2024

1.04.2024
1.03.2028

29.02.2016
28.02.2017

01.04.2000
01.04.2001

20.01.2024
17.02.2024

*/
int main()
{
    string begin;
    cin >> begin;
    cin.ignore();
    //  cout<<begin<<"\n";
    convert(begin,1);
    string end;
    cin >> end;
    //  cout<<end<<"\n";
    convert(end,0);
    cin.ignore();

    double tot_days = 0;

    /*
    30.12.2012
    14.02.2016

1.03.2000
1.04.2004
    */
    double ttt = 0;
    while(true)
    {

        // cout<<dd<<"----"<<mm<<" -- "<<yy<<"\n";
        if(mm == END_mm && yy == END_yy)
        {

            if(END_dd != 1 && END_dd != dd) tot_days += END_dd;
            check(mm,rest+END_dd,END_yy);
            //else tot_days++;
            break;
        }
        else
        {
            tot_days += solve(dd,mm,yy);
            //  cout<<tot_days<<"\n";
            // system("pause");
            if(mm == 12)
            {
                yy++,mm=1,dd=1;
            }
            else mm++,dd = 1;
        }
    }

    //cout<<tot_days;
    ll DAYS = tot_days, month = 0;
    ll year = 0;

    year = shit / 12;
    DAYS -= (year * 365);
    month = (shit - ( year * 12) );
    if(month == 0 && DAYS >= 31) month = DAYS / 30;
    if(year)
    {
        cout<<year;
        if(year > 1) cout<<" years, ";
        else cout<<" year, ";
    }
    if(month)
    {
        cout<<month;
        if(month > 1) cout<<" months, ";
        else cout<<" month, ";
    }
    cout<<"total "<<tot_days<<" days";
//cout<<"\n"<<shit;

}


