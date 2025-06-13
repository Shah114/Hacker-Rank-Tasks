// Character Swapping

#include <iostream>

using namespace std;


int main() {
    
    char A, B;
    
    cin >> A >> B;
    
    int sum = A + B;
    
    if (sum >= 0 && sum <= 255) {
        cout << "Possible" << endl;
    }
    else {
        cout << "Not Possible" << endl;
    }
    
    return 0;
}