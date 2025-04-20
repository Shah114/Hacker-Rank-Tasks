// Print the number obtained by rearranging the digits of the original number.

#include <iostream>

using namespace std;

int main() {
    
    int num;

    cin >> num;

    if (num > 99) {
        cout << "Enter a two-digit number!" << endl;
    }
    else if (num < 10) {
        cout << "Enter a two-digit number!" << endl;
    }
    else {
        int a = num / 10;
        int b = num % 10;

        if (b == 0) {
            cout << a << endl;
        }
        else {
            cout << b << a << endl;
        }

    }
    
    return 0;
}