#include<bits/stdc++.h>
using namespace std;
int main(){
    int testes, tamanho;
    cin>>testes;
    while (testes--)
    {
        cin>>tamanho;
        int values[tamanho], j = -1;
        bool flag = true;
        while (j++ < tamanho - 1) cin>>values[j];
        sort(values, values + tamanho);
        for (int i = 1; i < tamanho; i++) flag &= (values[i] - values[i - 1] <= 1);
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}