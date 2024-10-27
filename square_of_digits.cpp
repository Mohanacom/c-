#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,power,rem,sum=0;
    cout<<"Enter number:";
    cin>>num;
    while(num!=0){
        rem=num%10;
        power=rem*rem;
        sum=sum+power;
        num=num/10;
    }
    cout<<sum;
    return 0;

}