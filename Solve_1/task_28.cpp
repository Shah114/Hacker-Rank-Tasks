// Sum of Digits Check

#include <iostream>

using namespace std;


int main() {
    
    int num;

    cin >> num;

    int a = num % 10;
    int b = (num / 10) % 10;
    int c = (num / 100) % 10;
    int d = num / 1000;

    int sum = (a + b + c + d);

    if ((sum % 2 == 0) && (sum % 3 ==0)) {
        cout << "Multiple of 2 and 3" << endl;
    }
    else {
        cout << "Not a Multiple of 2 and 3" << endl;
    }
    
    return 0;
}