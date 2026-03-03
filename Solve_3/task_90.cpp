// Reverse Array Elements from K to L

#include <iostream>

using namespace std;


int main() {
    
    int size;
    cin >> size;

    int seq[size];

    for (int i = 0; i < size; ++i) {
        cin >> seq[i];
    }

    int k, l;
    cin >> k >> l;

    for (int i = 0; i < k - 1; ++i) {
        cout << seq[i] << " ";
    }
    
    for (int i = l - 1; i >= k - 1; --i) {
        cout << seq[i] << " ";
    }
    
    for (int i = l; i < size; i++) {
        cout << seq[i] << " ";
    }
    
    return 0;
}
