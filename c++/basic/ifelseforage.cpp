#include<iostream>
using namespace std;
int main()
{
    int age;
    cin >> age;
    if(age <= 57)
    {
        cout<< "hello !!!"<< endl;
        cout << "You are eligible for work!!"<< endl;
        if(age >= 55)
        {
            cout << "but,retiremnet soon!!";
        }
        else
        {
            cout << "more the than 2 years for your work!!";
        }
    }
    else
    {
        cout<< "not eligible for work!!";
    }
    return 0;
}