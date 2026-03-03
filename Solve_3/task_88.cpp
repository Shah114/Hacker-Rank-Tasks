// Reverse Array Elements up to K

#include <iostream>

using namespace std;


int main() {
    
    int size;
    cin >> size;
    
    int seq[size];
    
    for (int i = 0; i < size; ++i) {
        cin >> seq[i];
    }
    
    int k;
    cin >> k;
    
    for (int i = k - 1; i >= 0; --i) {
        cout << seq[i] << " ";
    }
    
    for (int i = k; i < size; ++i) {
        cout << seq[i] << " ";
    }
    
    return 0;
}
