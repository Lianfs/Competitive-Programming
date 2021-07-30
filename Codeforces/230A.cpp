#include<bits/stdc++.h>
using namespace std;
int main(){
    int s, n, a, b;
    bool flag = true;
    cin>>s>>n;
    int dragons[n], bonus[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        dragons[i] = a;
        bonus[i] = b;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if(dragons[j] > dragons[j + 1]){
                swap(dragons[j], dragons[j + 1]);
                swap(bonus[j], bonus[j + 1]);
            }
        } 
    }
    for (int i = 0; i < n; i++)
    {
        if(s > dragons[i])
            s += bonus[i];
        else
            flag = false;
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}