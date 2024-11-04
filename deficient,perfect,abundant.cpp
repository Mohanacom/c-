#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;
    cout << "Enter a number: ";
    cin >> number;

    
    if (number <= 0) {
        std::cout << "Please enter a positive integer." << endl;
        return 1;
    }

    
    for (int i = 1; i <= number / 2; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }


    if (sum == number) {
        std::cout << number << " is a perfect number." << std::endl;
    } else if (sum < number) {
        std::cout << number << " is a deficient number." << std::endl;
    } else {
        std::cout << number << " is an abundant number." << std::endl;
    }

    return 0;
}
