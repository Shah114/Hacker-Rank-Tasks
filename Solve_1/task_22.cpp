// Reverse Digits

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

    cout << a << b << c << d << e << endl;
    
    return 0;
}
