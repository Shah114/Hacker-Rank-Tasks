// Divisibility Check

#include <iostream>

using namespace std;


int main() {
    
    int num;

    cin >> num;

    int a = num % 10;
    int b = (num / 10) % 10;
    int c = (num / 100) % 10;
    int d = num / 1000;

    if ((num % a == 0) && (num % b == 0) && (num % c == 0) && (num % d == 0)) {
        cout << "Divisible by All Digits" << endl;
    }
    else {
        cout << "Not Divisible by All Digits" << endl;
    }
    
    return 0;
}