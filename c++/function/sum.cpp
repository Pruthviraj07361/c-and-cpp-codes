#include<bits/stdc++.h>
using namespace std;
int sum(int num1,int num2)
{
    int num3=num1+num2;
    cout<< num3;
    return num3;
}
int main(int num1,int num2)
{
    
    cout<<"please enter the two number for additon"<<endl;
    cin >> num1 >>num2;
    int maximum1=max(num1,num2);
    cout<< maximum1<< endl;
    sum(num1,num2);
    return 0;
}
