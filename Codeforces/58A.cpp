#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, hello = "hello";
    int counter = 0, current = 0;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == hello[current])
            current++;
    }
    if(current == 5)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}