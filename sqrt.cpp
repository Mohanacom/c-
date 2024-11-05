#include<iostream>
using namespace std;
int sqrtroot(int num){
    double t;  
double sqrtroot=num/2;  
do   
{  
t=sqrtroot;  
sqrtroot=(t+(num/t))/2;  
}   
while((t-sqrtroot)!= 0);  
return sqrtroot;  
}  
  


int main(){
    int n;
    cout<<"enter Number:";
    cin>>n;
    cout<<"The square root of "<< n+ " is: "<<sqrtroot(n);

}