#include <iostream>
using namespace std;

int main() {
    int n, i;
    int count=0;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Factors of " << n << " are: ";  
    for(i = 1; i <= n; ++i) {
        if(n % i == 0)
            // cout << i << " ";
            count++;
    }
    cout<<count;

    return 0;
}
