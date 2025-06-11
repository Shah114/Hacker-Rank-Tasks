// Conditional Doubling and Absolute Values

#include <iostream>
#include <cmath>

using namespace std;


int main() {
    
    float a;
    float b;
    float c;

    cin >> a >> b >> c;

    if (a < b && b < c) {
        float a_d = (a * 2);
        float b_d = (b * 2);
        float c_d = (c * 2);

        cout << a_d << " " << b_d << " " << c_d << endl;
    
    }
    else {
        float a_a = abs(a);
        float b_a = abs(b);
        float c_a = abs(c);
        
        cout << a_a << " " << b_a << " " << c_a << endl;

    }
    
    return 0;
}
