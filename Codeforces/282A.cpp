#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, counter = 0, i = -1;
    string value;
    cin>>n;
    while (i++ < n - 1 && cin>>value){
        if (value[0] == '+' || value[2] == '+')
            counter++;
        else
            counter--;
    }
    cout<<counter;
}