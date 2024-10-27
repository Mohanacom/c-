#include<iostream>

using namespace std;


int main()

{

     int num, temp, count=0, r, q;

     

     cout<<"Enter a number :";

     cin>>num;

     temp = num;

     while ( temp>0 )

     {
       q = temp/10;

       count++;

       temp = q;

     }

cout<<"\n The Count of digits of given number "<<num<<"  =  "<<count;
return 0;
 }

