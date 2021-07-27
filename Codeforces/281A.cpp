#include<bits/stdc++.h>
using namespace std;
int main(){
    string word, answer;
    cin>>word;
    for (int i = 0; i < word.length(); i++)
    {
        if(i==0)
            answer.insert(answer.end(),toupper(word[i]));
        else
            answer.insert(answer.end(),word[i]);
    }
    cout<<answer;
    return 0;
}