// Palindrome Number Check

#include <iostream>

using namespace std;


int main() {
    
    int num;

    cin >> num;

    // edcba

    int a = num % 10;
    int b = (num / 10) % 10;
    int d = (num / 1000) % 10;
    int e = num / 10000;

    if (a == e && b == d) {
        cout << "Palindrome" << endl;
    }
    else {
        cout << "Not Palindrome" << endl;
    }
    
    return 0;
}