// Sequence Minimum and Maximum Value Finder

#include <iostream>

using namespace std;


int main() {
    
    int size;
    cin >> size;

    int seq [size];

    for (int i = 0; i < size; ++i) {
        cin >> seq[i];
    }

    int max = 0;
    for (int i = 0; i < size; ++i) {
        if (seq[i] > max) {
            max = seq[i];
        }
    }

    int min = max;
    for (int i = 0; i < size; ++i) {
        if (seq[i] < min) {
            min = seq[i];
        }
    }

    cout << "minimum = " << min << ", maximum = " << max << endl;
    
    return 0;
}
