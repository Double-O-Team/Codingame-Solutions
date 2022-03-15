#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
**/
long long calc(long long n,long long s){
  if(n==1)
  return s;
  else if(n==0)
  return 0;
  else
  {
    long long sum=4*s+(n-1)*6;
    long long snew=s+4*(n-1);
    long long nnew=n-2;
    return sum+calc(nnew,snew);
  }
}

int main()
{
  int n;
  cin >> n; cin.ignore();
  cout << calc(n, 1) << endl;
}
