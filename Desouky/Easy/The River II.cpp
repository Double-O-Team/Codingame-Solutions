#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int digits(int val){
    int sum = 0;
    while(val){
        sum += val%10;
        val /= 10;
    }
    return sum;
}

int main()
{
    int num;
    cin >> num; cin.ignore();
    bool flag = false;
    for(int x = 1; x<num; x++){
        if(x + digits(x) == num){
            flag = true;
        }
    }
    if(flag)cout<<"YES";
    else cout<<"NO";
    
}
