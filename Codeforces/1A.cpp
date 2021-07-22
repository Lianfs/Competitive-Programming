#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, a;
    int quant_n = 0, quant_m = 0;
    cin>>n>>m>>a;
    while(quant_n < n || quant_m < m){
        if (quant_n < n)
            quant_n += a;
        if (quant_m < m)
            quant_m += a;
    }
    cout<<(quant_n/a) * (quant_m/a)<<endl;
    return 0;
}