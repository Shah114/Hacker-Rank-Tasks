// Value Calculation

/*

int main() {
    
    int x = 3, y = 4, z = 2;
    int p = 1;
    
    p *= x;
    p *= y;
    p -= x + y + z;
    
    cout << "Value of p is: " << p;
    
    return 0;
}

*/

#include <iostream>

using namespace std;

int main() {
    
    // p = p * x = 1 * 3 = 3
    // p = p * y = 3 * 4 = 12
    // p = p - (x + y+ z) = 12 - 9 = 3
    
    cout << "Value of p is: 3" << endl;
    
    return 0;
}
