#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout<<"Enter the Number:";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"The Natural Number is : " << sum;
}