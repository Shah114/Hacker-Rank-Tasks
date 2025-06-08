// Digit Sum Difference

#include <iostream>

using namespace std;


int main() {
    
    int num;

    cin >> num;

    // edcba

    int a = num % 10;
    int b = (num / 10) % 10;
    int d = (num / 1000) % 10;
    int e = num / 10000;

    int ab = a + b;
    int de = d + e;

    cout << (de - ab) << endl;
    
    return 0;
}
