#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, answer = 0;
    cin>>n>>k;
    int values[n];
    for (int i = 0; i < n; i++){
        cin>>values[i];
        if(values[i] <= 5 - k)
            answer++;
    }
    cout<<answer/3;
    return 0;
}