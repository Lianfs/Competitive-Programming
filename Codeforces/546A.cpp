#include<bits/stdc++.h>
using namespace std;
int main(){
    int k, n , w, answer = 0;
    cin>>k>>n>>w;
    for (int i = 1; i <= w; i++)
    {
        answer += k*i;
    }
    if(answer <= n)
        cout<<'0';
    else
        cout<<answer - n;
    
    return 0;
}