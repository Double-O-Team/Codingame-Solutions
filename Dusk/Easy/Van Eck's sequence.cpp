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
    
    int a1;
    cin >> a1; cin.ignore();
    int n;
    cin >> n; cin.ignore();
vector<int>sq(n,0);
vector<int>index(n,-1);
sq[0]=a1;
for(int i=0;i<n-1;i++)
{
    if(index[sq[i]]!=-1)sq[i+1]=i-index[sq[i]];
    index[sq[i]]=i;
}
cout<<sq[n-1]<<endl;
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;


}
