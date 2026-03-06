// Group Positive and Negative Elements in Array

#include <iostream>

using namespace std;


int main() {
    
    int size;
    cin >> size;

    int seq[size];

    for (int i = 0; i < size; ++i) {
        cin >> seq[i];
    }

    for (int i = 0; i < size; ++i) {
        if (seq[i] > 0) {
            cout << seq[i] << " ";
        }
    }
    
    for (int i = 0; i < size; ++i) {
        if (seq[i] < 0) {
            cout << seq[i] << " ";
        }
    }
    
    return 0;
}
