// Print first its last digit (units), and then its middle digit (tens).

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

        cout << "Last digit (units): "  << a << endl;
        cout << "Middle digit (tens): " << b << endl;
    }
    
    return 0;
}