#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int binaryNum[7];
string totalNumber;

void decToBinary(int n)
{
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for(int x = 6 ; x >= i ; x--){
        binaryNum[x] = 0;
    }

    for (int j = 6; j >= 0; j--){
        totalNumber += to_string(binaryNum[j]) ;
    }
}


int main()
{
    string message;
    getline(cin, message);
    for(int x = 0; x<message.size(); x++){
        decToBinary(int(message[x]));
    }
    // cout<<totalNumber<<"\n";
    for(int x = 0; x<totalNumber.size(); x++){
        int cnt = 0;
        if(totalNumber[x] == '1'){
            int idx = 0;
            for(int y = x; y<totalNumber.size() and totalNumber[y] == '1'; y++){
                cnt ++;
                idx = y;
            }
            // cout<<cnt<<" cnt 1\n";
            x = idx;
            cout<<"0 ";
            for(int x = 0; x<cnt; x++)cout<<0;
        }
        else{
            int idx = 0;
            for(int y = x; y<totalNumber.size() and totalNumber[y] == '0'; y++){
                cnt ++;
                idx = y;
            }
            x = idx;
            cout<<"00 ";
            for(int x = 0; x<cnt; x++)cout<<0;
        }
        if(x != totalNumber.size()-1)cout<<" ";
    }
    


    

}
