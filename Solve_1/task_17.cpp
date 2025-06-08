// Palindrome Check

#include <iostream>

using namespace std;


int main() {
    
    int number;
    int a;
    int b;
    int c;
    int d;

    cin >> number;

    a = number % 10; 
    b = (number / 10) % 10;
    c = (number / 100) % 10;
    d = number / 1000;

    if (a == d && b == c) {
        cout << "Palindrome" << endl;
    }
    else {
        cout << "Not Palindrome" << endl;
    }
    
    return 0;
}
