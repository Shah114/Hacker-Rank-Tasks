// Redistribute the values

#include <iostream>

using namespace std;

int main() {
    
    int a;
    int b;

    cin >> a >> b;

    if (a > b) {
        cout << a << " " << b << endl;
    }
    else if (b > a) {
        cout << b << " " << a << endl;
    }
    else {
        cout << "These 2 numbers are equal." << endl;
    }
    
    return 0;
}
