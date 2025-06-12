// Division Remainder Check

#include <iostream>

using namespace std;


int main() {
    
    int a, b, r, s;

    cin >> a >> b >> r >> s;

    int remainder = a % b;

    if (remainder == r) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    
    return 0;
}