#include<bits/stdc++.h>
using namespace std;
int main(){
    int levels, i = -1, j = -1, sum = 0, fatorial = 0;
    cin>>levels;
    int x_levels, y_levels;
    cin>>x_levels;
    int values_x[x_levels];
    while (i++ < x_levels - 1)
    {
        cin>>values_x[i];
    }
    cin>>y_levels;
    int values_y[y_levels];
    while (j++ < y_levels - 1)
    {
        cin>>values_y[j];
    }
    for (int k = 0; k < x_levels; k++)
    {
        for (int l = 0; l < y_levels; l++)
        {
            if(values_x[k] == values_y[l])
                values_y[l] = 0;
        }
        
    }
    sum += accumulate(values_x, values_x + x_levels, 0);
    sum += accumulate(values_y, values_y + y_levels, 0);
    for (int i = levels; i > 0; i--)
    {
        fatorial += i;
    }
    if(fatorial == sum)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
    return 0;
}