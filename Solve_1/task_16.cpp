// Extract Hundreds Digit

#include <iostream>

using namespace std;


int main() {
    
    int num;

    cin >> num;

    int c = (num / 100) % 10;

    cout << c << endl;
    
    return 0;
}