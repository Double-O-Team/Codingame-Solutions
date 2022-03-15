#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
 int m;    int b;
  int a;
  int now=0;




int get(int x)
{
    return (a*x+b)%m;
}


int main()
{
   
    cin >> a; cin.ignore();

    cin >> b; cin.ignore();
   
    cin >> m; cin.ignore();

  int ans=0;
  int u=0;
  int r=0;
for(int i=0;i<=500000;i++)
{
if(get(now)%4==0)
  {
      u++;
      now=get(now);
  }
  else if(get(now)%4==1)
  {
      u--;
      now=get(now);
  }
  else if(get(now)%4==2)
  {
      r++;
      now=get(now);
  }
   else  if(get(now)%4==3)
  {
      r--;
      now=get(now);
  }
  ans++;
  if(r==0&&u==0)
  break;
}
  
  



    cout << ans<< endl;
}
