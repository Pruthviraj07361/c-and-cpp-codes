#include<bits/stdc++.h>
using namespace std;
int upperone(int i,int j,int n)

{
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int lowerone(int i,int j,int n)

{
    
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int n,i,j;
    cout<<"enter the value for one code";
    cin>> n;
    upperone(i,j,n);
    lowerone(i,j,n);
    return 0;
}