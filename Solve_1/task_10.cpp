#include <iostream>

using namespace std;


int main() {
    
    int num;

    cin >> num;

    if (num < 100) {
        cout << "Enter a three-digit number!" << endl;
    }
    else if (num > 999) {
        cout << "Enter a three-digit number!" << endl;
    }
    else {
        int a = num % 10;
        int b = (num / 10) % 10;
        int c = num / 100;

        int sum = a + b + c;
        int product = a * b * c;

        cout << "Sum of the digits: "  << sum << endl;
        cout << "Product of the digits: " << product << endl;
    }
    
    return 0;
}