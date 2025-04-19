// Find the sum and product of its digits.

#include <iostream>

using namespace std;

int main() {
    
    int num;

    cin >> num;

    int a = num / 10;
    int b = num % 10;

    int sum = a + b;
    int product = a * b;

    cout << "Sum of the digits: " << sum << endl;
    cout << "Product of the digits: " << product << endl;
    
    return 0;
}
