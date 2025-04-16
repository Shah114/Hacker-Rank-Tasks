// Print Number with Spaces

#include <iostream>

using namespace std;

int main() {
    
    int number;
    
    cin >> number;
    
    int a = number % 10;
    int b = (number / 10) % 10;
    int c = number / 100;
    
    cout << c << " " << b << " " << a << endl;
    
    return 0;
}
