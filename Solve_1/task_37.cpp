// Number Replacement

#include <iostream>
#include <cmath>

using namespace std;


int main() {
    
    float a, b, c, d;

    cin >> a >> b >> c >> d;

    if (d <= c && c <= b && b <= a) {
        cout << a << " " << a << " " << a << " " << a << endl;
    }
    else if (a < b && b < c && c < d) {
        cout << a << " " << b << " " << c << " " << d << endl;
    }
    else {
        float s_a = pow(a, 2);
        float s_b = pow(b, 2);
        float s_c = pow(c, 2);
        float s_d = pow(d, 2);

        cout << s_a << " " << s_b << " " << s_c << " " << s_d << endl;
    }
    
    return 0;
}