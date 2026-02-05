// Least Common Multiple (LCM)

#include <cmath>
#include <iostream>

using namespace std;


int main() {
    
    int A, B;
    
    cin >> A >> B;
    
    for (int i = max(A, B); i >= 1; i++) {
        if (i % A == 0 && i % B == 0) {
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}
