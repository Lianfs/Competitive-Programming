#include<bits/stdc++.h>
using namespace std;
int main(){
    string value;
    string vowels = "aeiouyAEIOUY";
    string result;
    cin>>value;
    for(int i=0; i < value.length(); i++){
        if(vowels.find(value[i]) < 0 || vowels.find(value[i]) > 11){
            result.insert(result.end(),'.');
            result.insert(result.end(), tolower(value[i]));
        }
    }
    cout<<result;
    return 0;
}