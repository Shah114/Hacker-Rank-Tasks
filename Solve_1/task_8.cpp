// Using one division operation entirely, output the first digit of this number (hundreds).

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
        int a = num / 100;
        
        cout << a << endl;
    }
    
    return 0;
}