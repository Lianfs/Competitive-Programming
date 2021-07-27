#include <bits/stdc++.h>
using namespace std;
int main()
{
    int answer = 0, i = 0, flag = true;
    string username;
    cin >> username;
    while(i < username.length())
    {
        for (int j = 0; j < username.length(); j++)
        {
            if(i != j && username[i] == username[j] && i > j)
                flag = false;
        }      
        if(flag)
            answer++; 
        flag = true;
        i++;
    }
    if(answer%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
    return 0;
}