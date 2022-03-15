

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string str;
void add()
{
    for(int i=str.size()-1;i>=0;i--)
    {
        int num=str[i]-'0';
        if(num<9)
        {
            num++;
            str[i]=num+'0';
            return ;
        }
        else
        {
            str[i]='0';
        }
    }
    str='1'+str;
}
void sure()
{
    for(int i=1;i<str.size();i++)
    {
        if(str[i]<str[i-1])
        {
            str[i]=str[i-1];
            i++;
            while(i<str.size())
            {
                str[i]=str[i-1];
                i++;
            }
        }
    }
    return ;
}
int main()
{
    cin>>str;
    add();
    sure();
    cout<<str<<endl;
   
    return 0;
}
