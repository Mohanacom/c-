#include <iostream>
using namespace std;

int main() {
    int number;

    
    cout << "Enter a number: ";
    cin >> number;

    
    while (number >= 10) {
        int sum = 0;

        
        while (number > 0) {
            sum += number % 10; 
            number /= 10;       
        }

        number = sum; 
    }

    
    cout <<  number << endl;

    return 0; 
}