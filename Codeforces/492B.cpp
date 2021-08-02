#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, l;
    int difference = 0;
    cin>>n>>l;
    int lanterns[n];
    for (int i = 0; i < n; i++)
    {
        cin>>lanterns[i];
    }
    sort(lanterns, lanterns + n);
    difference = max(lanterns[0], l - lanterns[n - 1]) * 2;
    for (int i = n - 1; i > 0; i--)
    {
        if(lanterns[i] - lanterns[i - 1] > difference)
            difference = lanterns[i] - lanterns[i - 1];
    }
    cout.precision(20);
    cout<<difference/2.0;   
    return 0;
}