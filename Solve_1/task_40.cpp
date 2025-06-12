// Value Swapping Without Temporary Variable

#include <iostream>

using namespace std;


int main() {
    
    int A, B;
    
    cin >> A >> B;
    
    A = A + B;
    B = A - B;
    A = A - B;
    
    cout << A << " " << B << endl;
    
    return 0;
}
