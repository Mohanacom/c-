#include<iostream>
using namespace std;
int main(){
    int product=1,num,rem;
    cout<<"enter a number:";
    cin>>num;
    while(num!=0){
        rem=num%10;
        product=product*rem;
        num=num/10;
    }
    cout<<"Product of digits:"<<product;
    return 0;
}