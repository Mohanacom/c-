#include<iostream>
using namespace std;
int main(){
   int n,i;
   int fact,rem;
   cout<<"Enter number:";
   cin>>n;
   
   
   int sum = 0;
   int temp = n;
   while(n){
      i = 1,fact = 1;
      rem = n % 10;
      while(i <= rem){
         fact = fact * i;
         i++;
      }
      sum = sum + fact;
      n = n / 10;
   }
   if(sum == temp)
      cout<<"True , "<<temp<<" is a strong number";
   else
      cout<<"False , "<<temp<<" is not a strong number";
   return 0;
}