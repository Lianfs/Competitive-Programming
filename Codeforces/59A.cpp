#include<bits/stdc++.h>
using namespace std;
int main(){
    std::string s;
    int counter = 0;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if(islower(s[i]))
            counter++;
    }
    if ((float)s.length()/2 > counter){
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = ::toupper(s[i]);
        }
    }else{
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = ::tolower(s[i]);
        }
    }
    cout<<s;
    return 0;
}