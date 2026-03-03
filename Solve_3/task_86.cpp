// Check Symmetry of Array Elements

#include <iostream>

using namespace std;


int main() {
    
    int size;
    cin >> size;

    int seq[size];

    for (int i = 0; i < size; ++i) {
        cin >> seq[i];
    }
    
    for (int i = 0; i < size / 2; ++i) {
        if (seq[i] != seq[size - 1 - i]) {
            cout << "Not Symmetrical" << endl;
            return 0;
        }
    }
    
    cout << "Symmetrical" << endl;
    
    return 0;
}
