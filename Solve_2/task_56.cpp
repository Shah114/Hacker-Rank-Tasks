#include <cmath>
#include <iostream>

using namespace std;

int main() {
    
    int N;
    
    cin >> N;
    
    for (int a = 1; a <= N/2; ++a) {
        for (int b = a + 1; b <= N/2; ++b) {
            if (pow(a, 2) + pow(b, 2) <= N) {
                cout << a << "^2 + " << b << "^2 = " << (pow(a, 2) + pow(b, 2)) << endl;
            }
        }
    }
    
    return 0;
}
