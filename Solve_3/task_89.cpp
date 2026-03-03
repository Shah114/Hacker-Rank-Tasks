// Reverse Array Elements from K to N

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

    for (int i = 0; i < k - 1; ++i) {
        cout << seq[i] << " ";
    }

    for (int i = size - 1; i >= k - 1; --i) {
        cout << seq[i] << " ";
    }
    
    return 0;
}
