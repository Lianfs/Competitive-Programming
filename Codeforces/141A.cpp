#include<bits/stdc++.h>
using namespace std;
int main(){
    string name1, name2, s, answer;
    cin>>name1;
    cin>>name2;
    cin>>s;
    answer = name1 + name2;
    if (answer.length() != s.length())
        cout<<"NO";
    else{
        for (int i = 0; i < answer.length(); i++)
        {
            for (int j = 0; j < answer.length(); j++)
            {
                if(answer[i] == s[j]){
                    answer[i] = 1;
                    s[j] = 1;
                    break;
                }
            }
        }
        if(answer == s)  
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}