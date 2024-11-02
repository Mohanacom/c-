#include<iostream>
using namespace std;
 
int F(int N)
{
    if (N <= 1)
       {
        return N;
       }
       
    return F(N-1) + F(N-2);
}
 
int main ()
{
    int N ;
    cout<<"Enter number:";
    cin>>N;
    cout << F(N);
    return 0;
}