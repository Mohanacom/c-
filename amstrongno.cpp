

#include <iostream>
#include<cmath>
using namespace std;

// int main() {
//     int num, num1, rem, result = 0;

    
//     cout << "Enter number: ";
//     cin >> num;

//     num1 = num;

    
//     while (num1 != 0) {
//         rem = num1 % 10;  
//         result += rem * rem * rem;  
//         num1 /= 10;  
//     }

    
//     if (result == num)
//         cout << num << " is an Armstrong number." << endl;
//     else
//         cout << num << " is not an Armstrong number." << endl;

//     return 0;
// }
int main(){
    int num,rem,sum;
    cout<<"enter number:";
    cin>>num;
    while(num!=0){
        rem=num%10;
        num=num/10;
        int p=pow(rem,3);
        sum=sum+p;
    }
    cout<<sum<<"\n";

    if (sum == num)
         cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;




    return 0;
}