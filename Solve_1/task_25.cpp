// Digit 3 Check

#include <iostream>

using namespace std;


int main() {
    
    int num;
    int digit = 3;

    cin >> num;

    int a = num % 10;
    int b = (num / 10) % 10;
    int c = (num / 100) % 10;
    int d = num / 1000;

    if (a == digit || b == digit || c == digit || d == digit) {
        cout << "Digit 3 Found" << endl;
    }
    else {
        cout << "Digit 3 Not Found" << endl;
    }
    
    return 0;
}
