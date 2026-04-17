#include<bits/stdc++.h>
using namespace std;
int upperone(int i,int j,int n)

{
    int k;
    for(i=1;i<=n;i++)
    {
        for(k=n-i;k<=i;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}