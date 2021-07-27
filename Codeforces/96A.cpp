#include<bits/stdc++.h>
using namespace std;
int main(){
    string form;
    int counter = 0;
    bool flag = false;
    cin>>form;
    for(int i= 0; i < form.length(); i++){
        if(i + 1 < form.length() && form[i] == form[i + 1])
            counter++;
        else
            counter = 0;
        if (counter == 6)
            flag = true;
    }   
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}