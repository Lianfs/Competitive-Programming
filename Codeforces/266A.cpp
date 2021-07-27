#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, pointer = 0, answer = 0;
    string stones;
    cin>>n;
    cin>>stones;
    for(int i=1; i <= n; i++){
        if (stones[pointer] == stones[i]){
            answer++;
        }
        else
            pointer = i;
    }
    cout<<answer;
    return 0;
}