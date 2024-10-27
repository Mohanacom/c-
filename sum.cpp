#include<iostream>
using namespace std;
int main(){
    int sum=0,num,rem;
    cout<<"enter a number:";
    cin>>num;
    while(num!=0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    cout<<"Sum of digits:"<<sum;
    return 0;
}