// Greatest Common Divisor (GCD)

#include <cmath>
#include <iostream>

using namespace std;


int main() {
    
    int A;
    int B;

    cin >> A >> B;

    for (int i = min(A, B); i >= 1; i--) {
        if (A % i == 0 && B % i == 0) {
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}
