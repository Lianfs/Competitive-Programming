#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, counter = 0;
    int p, v, t;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>p>>v>>t;
        if (p+v+t > 1)
            counter++;
    }
    cout<<counter;
    return 0;
}