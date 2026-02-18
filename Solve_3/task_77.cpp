// Swap Maximum and Minimum Elements

#include <iostream>

using namespace std;


int main() {
    
    int size;
    cin >> size;

    int seq[size];

    for (int i = 0; i < size; ++i) {
        cin >> seq[i];
    }

    int max = seq[0];
    int pos_max = 0;
    for (int i = 0; i < size; ++i) {
        if (seq[i] > max) {
            max = seq[i];
            pos_max = i;
        }
    }

    int min = max;
    int pos_min = 0;
    for (int i = 0; i < size; ++i) {
        if (seq[i] < min) {
            min = seq[i];
            pos_min = i;
        }
    }

    seq[pos_max] = min;
    seq[pos_min] = max;

    for (int i = 0; i < size; ++i) {
        cout << seq[i] << " ";
    }  
    
    return 0;
}
