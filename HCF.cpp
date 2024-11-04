#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, hcf = 1;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

   
    for (int i = min; i >= 1; i--) {
        if (num1 % i == 0 && num2 % i == 0 && num3 % i == 0) {
            hcf = i;
            break; 
        }
    }

    cout << "The HCF of " << " is: " << hcf << endl;

    return 0;
}

