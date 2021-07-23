#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, value, i = -1;
    cin>>n>>k;
    int score[n], advance = 0;
    while (i++ < n - 1 && cin >> value)
    {   
        score[i] = value;
    }
    for(int j=0; j < n; j++){
        if (score[j] >= score[k - 1] && score[j] > 0)
            advance++;
    }
    cout<<advance;   
    return 0;
}