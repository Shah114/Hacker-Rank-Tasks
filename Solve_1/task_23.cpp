// Identical Digits Check

#include <iostream>

using namespace std;


int main() {
    
    int num;

    cin >> num;

    int a = num % 10;
    int b = (num / 10) % 10;
    int c = (num / 100) % 10;
    int d = (num / 1000) % 10;
    int e = num / 10000;

    if (a == b || a == c || a == d || a == e || b == c || b == d || b == e || c == d || c == e || d == e) {
        cout << "Identical Digits Found" << endl;
    }
    else {
        cout << "No Identical Digits" << endl;
    }
    
    return 0;
}