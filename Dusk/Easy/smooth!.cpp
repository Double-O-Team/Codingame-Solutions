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
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        long long f;
        cin >> f; cin.ignore();
        while(f!=1)
        {
            if(f%5==0)
            f/=5;
            else if(f%3==0)
            f/=3;
            else if(f%2==0)
            f/=2;
            else if(n!=1)
            break;
        }
        if(f!=1)
        cout << "DEFEAT" << endl;
        else
        cout<<"VICTORY"<<endl;
    }



    
}
