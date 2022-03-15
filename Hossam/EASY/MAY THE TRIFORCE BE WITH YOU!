

#include <iostream>

using namespace std;
int n,w;
int main()
{
   cin>>n;
   w=(2*n)-1;
   bool f=0;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<w;j++)
       {
           if(i==0&&!f)
           {
               cout<<".";
               f=1;
               continue;
           }
           cout<<" ";
       }
       for(int j=0;j<=i;j++)
       {
           cout<<"*";
           if(j<i)cout<<"*";
       }
       cout<<endl;
       w--;
   }
    w=n-1;
    int h=2*n-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<w;j++)cout<<" ";
        for(int j=0;j<=i;j++)
        {
             cout<<"*";
           if(j<i)cout<<"*";
        }
        for(int j=0;j<h;j++)cout<<" ";
          for(int j=0;j<=i;j++)
        {
             cout<<"*";
           if(j<i)cout<<"*";
        }
        cout<<endl;
        w--;
        h-=2;
    }
    
    return 0;
}
