#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long digits(long long num){
    long long ret = 0;
    while(num){
        ret += num%10;
        num /= 10;
    }
    return ret;
}


int main()
{
    long long one;
    cin >> one; cin.ignore();
    long long two;
    cin >> two; cin.ignore();
    while(one != two){
        while(one < two){
            one += digits(one);
        }

        if(one == two){
            cout<<one;
            return 0;
        }

        while(two < one){
            two += digits(two);
        }
        if(one == two){
            cout<<one;
            return 0;
        }
    }
}
