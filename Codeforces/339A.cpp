#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, result;
    int quant_1 = 0, quant_2 = 0, quant_3 = 0;
    cin>>s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1')
            quant_1++;
        else if(s[i] == '2')
            quant_2++;
        else if(s[i] == '3')
            quant_3++;
    }
    for(int i = 0; i < quant_1 ; i++){
        if(i == quant_1 - 1)
            result.insert(result.end(), '1');
        else{
            result.insert(result.end(), '1');
            result.insert(result.end(), '+');
        }
    }
    for(int i = 0; i < quant_2 ; i++){
        if(i==0 && result.length() > 0)
            result.insert(result.end(), '+');
        if(i == quant_2 - 1)
            result.insert(result.end(), '2');
        else{
            result.insert(result.end(), '2');
            result.insert(result.end(), '+');
        }
    }
    for(int i = 0; i < quant_3 ; i++){
        if(i==0 && result.length() > 0)
            result.insert(result.end(), '+');
        if(i == quant_3 - 1)
            result.insert(result.end(), '3');
        else{
            result.insert(result.end(), '3');
            result.insert(result.end(), '+');
        }
    }
    cout<<result;
    return 0;
}