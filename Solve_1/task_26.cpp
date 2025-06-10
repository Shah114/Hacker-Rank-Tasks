// Consecutive Digits Check

#include <iostream>

using namespace std;


int main() {
    
    int num;
    
    cin >> num;
    
    int a = num % 10;
    int b = (num / 10) % 10;
    int c = (num / 100) % 10;
    int d = num / 1000;
    
    if (d == 3 && c == 7) {
        cout << "Consecutive Digits Found" << endl;
    }
    else if (c == 3 && b == 7) {
        cout << "Consecutive Digits Found" << endl;
    }
    else if (b == 3 && a == 7) {
        cout << "Consecutive Digits Found" << endl;
    }
    else {
        cout << "Consecutive Digits Not Found" << endl;
    }
    
    return 0;
}