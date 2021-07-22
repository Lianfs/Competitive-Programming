#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, i = 0;
    string word;
    cin>>n;
    while (i < n){
        cin>>word;
        if (word.length() > 10){
            cout << word[0] << word.length() - 2<<word[word.length() - 1] << endl;
        }else{
            cout << word << endl;
        }
        i++;
    }
    return 0;
}
