#include<bits/stdc++.h>
using namespace std;
int main(){
    int values[3];
    cin>>values[0]>>values[1]>>values[2];
    sort(values, values + 3);
    cout<<values[2] - values[1] + values[1] - values[0];
    return 0;
}
