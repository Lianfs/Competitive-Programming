#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum = 0, count = 0, answer = 0;
    cin>>n;
    int values[n];
    for (int i = 0; i < n; i++)
    {
        cin>>values[i];
        sum += values[i];
    }
    sum = sum/2;
    sort(values, values + n);
    for (int j = n - 1; j >= 0; j--)
    {
        if(count <= sum)
            answer++;
        count += values[j];
    }
    cout<<answer;
    return 0;
}