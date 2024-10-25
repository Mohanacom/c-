#include<iostream>
using namespace std;
// int main(){
//     int num1;
//     bool isPrime = true;  // Assume the number is prime initially
//     cin >> num1;

//     // Handle cases where number is less than 2
//     if (num1 <= 1) {
//         cout << "It is not a prime number" << endl;
//         return 0;
//     }

//     // Check divisibility from 2 to sqrt(num1)
//     for (int i = 2; i <= num1 / 2; i++) {
//         if (num1 % i == 0) {
//             cout << "It is not a prime number" << endl;
//             isPrime = false;
//             break;
//         }
//     }

//     // If the num.ber is still marked as prime after the loop
//     if (isPrime) {
//         cout << "It is a prime number" << endl;
//     }
//  return 0;

    

//}



bool isPrime(int num)
{

    for(int i=2;i<num;i++)
    {
    if(num%i==0){
        return false;
    }
    }
    return true;

}






int main()
{
int num;
cin>>num;
if(isPrime(num)){
        cout<<"prime";
    }
    
    else
    {
        cout<<"not prime";
    }
    return 0; 
    
}















































































