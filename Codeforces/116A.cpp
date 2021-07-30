#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, aux = 0, answer = 0, i = 0, a, b;
    cin>>n;
    while (i++ < n && cin>>a>>b){
        aux = aux - a + b;
        if (aux >= answer)
            answer = aux;
    }
    cout<<answer;
    return 0;
}