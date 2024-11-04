#include <iostream>
using namespace std;
int trailing_zeros(int number){
   int count = 0;
   for (int i = 5; number / i >= 1; i *= 5){
      int temp = number / i;
      count = count + temp;
   }
   return count;
}
int main(){
   int number ;
   cin>>number;
   cout<<"Count of trailing zeros in factorial of a number are: "<<trailing_zeros(number);
   return 0;
}