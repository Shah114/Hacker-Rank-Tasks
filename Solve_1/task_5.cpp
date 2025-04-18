#include <iostream>

using namespace std;

int main() {
    
    int num;
    int a;
    int b;

    cin >> num;

    if (10 <= num <= 99) {
        a = num / 10;
        b = num % 10;
        cout << "Left digit: " << a << endl;
        cout << "Right digit: " << b << endl;
    } 
    else {
        cout << "Enter 2 digit number!" << endl;
    }
    
}