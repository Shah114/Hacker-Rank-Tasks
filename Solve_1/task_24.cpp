// Unique Digits Check

#include <iostream>

using namespace std;


int main() {
    
    int num;

    cin >> num;

    int a = num % 10;
    int b = (num / 10) % 10;
    int c = (num / 100) % 10;
    int d = num / 1000;

    if (a == b || a == c || a == d || b == c || b == d || c == d) {
        cout << "Duplicate Digits Found" << endl;
    }
    else {
        cout << "All Digits are Different" << endl;
    }
    
    return 0;
}