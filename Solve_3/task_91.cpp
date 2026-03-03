// Cyclically Shift Array Elements to the Right

#include <iostream>

using namespace std;


int main() {
    
    int size;
    cin >> size;

    int seq[size];

    for (int i = 0; i < size; ++i) {
        cin >> seq[i];
    }
    
    cout << seq[size - 1] << " ";
        
    for (int i = 0; i < size - 1; ++i) {
        cout  << seq[i] << " ";
    }
    
    return 0;
}
