#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<vector<int>>comb(800);

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    cin >> n; cin.ignore();
    int index=0;

    for(int i=0;i<=100;i++)
    {
        for(int j=0;j<=100;j++)
        {
            for(int w =0;w<=100;w++)
            {
                if(i>=j&&(i*5)+(j*2)+(w*3)==n)
                {
                    comb[index].push_back(i);comb[index].push_back(j);
                    comb[index].push_back(w);
                    index++;
                }
            }
        }
    }
    for(int i=0;i<comb.size();i++)
    {
        cout<<comb[i][0]<<" "<<comb[i][1]<<" " <<comb[i][2]<<endl;
    }

    cout<<endl;
}
