#include<iostream>
using namespace std;
int main()
{
    /* 1D array*/
    /* since array can store multiople data in one single variable we do not have to make 
    multiple variable to store 
    different data*/
    int arr[5];
    cin >> arr[0]>> arr[1]>> arr[2]>> arr[3]>> arr[4];
    cout<<arr[4];
    arr[4]+=10;
    /*datatype of array  now that is declared as integer so we can not add the float value in it.
    */
   /* 2D array*/
   int a[3][3];
   int i,j;
   for(i=0;i<9;i++)
   {
        cin>>a[i][j];
   }

   for(i=0;i<9;i++)
   {
    cout<< a[i][j];
   } 

}