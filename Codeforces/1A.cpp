#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, m, a;
    long long quant_n, quant_m;
    cin>>n>>m>>a;
    if (n%a==0)
        quant_n = n/a;
    else
        quant_n = (int) n/a + 1;
    if (m%a==0)
        quant_m = m/a;
    else
        quant_m = (int) m/a + 1;
    cout<<quant_n*quant_m<<endl;
    return 0;
}