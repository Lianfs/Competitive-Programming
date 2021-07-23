#include<bits/stdc++.h>
using namespace std;
int main(){
    int value, moves = 0, i = 0;
    while(i++ < 25 && cin>>value){
        if(value == 1){
            if(i<=5)
                moves += 2;
            else if(i<=10)
                moves += 1;
            else if(i > 15 && i<=20)
                moves += 1;
            else if(i > 20 && i<=25)
                moves += 2;
            if(i == 1 || i == 6 || i == 11 || i == 16 || i == 21)
                moves += 2;
            else if(i == 2 || i == 7 || i == 12 || i == 17 || i == 22)
                moves += 1;
            else if(i == 4 || i == 9 || i == 14 || i == 19 || i == 24)
                moves += 1;
            else if(i == 5 || i == 10 || i == 15 || i == 20 || i == 25)
                moves += 2;
        }       
    }
    cout<<moves;
    return 0;
}