#include <iostream>  

#include<cmath>  

using namespace std;  

int main()  

{  
    int base,exponent;

    cout<<"Enter base:";

    cin>>base;

    cout<<"Enter exponent:";

    cin>>exponent;
    
    int power=pow(base,exponent);  

    cout << "Power of the given number is :" <<power;  

    return 0;  

}  