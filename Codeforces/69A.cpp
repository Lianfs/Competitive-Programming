#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i = 0, x, y, z, sum_x = 0, sum_y = 0, sum_z = 0;
    cin>>n;
    while(i++ < n && cin>>x && cin>>y && cin>>z){
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }
    if(sum_x == 0 && sum_y == 0 && sum_z == 0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}