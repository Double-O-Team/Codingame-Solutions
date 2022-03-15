#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solve(int r,int n)
{
    for(int i=0;i<100;i++){
        if(r>n)return 0;
        if(r==n)return 1;
        int tmpr=r;
        int sum=0;
        while(r)
        {
      
            sum+=r%10;
            r/=10;
           
        }
    tmpr+=sum;
    r=tmpr;
    }
return 0;
   
}
int main()
{
    int r_1;
    cin >> r_1; cin.ignore();
    int r=r_1;
    bool f=0;
    for(int i=1;i<r;i++)
    {
        f=solve(i,r);
        if(f)break;
    }
  
    (f)?cout<<"YES\n":cout<<"NO\n";
}
