// Count Local Minima and Maxima

#include <iostream>

using namespace std;


int main() {
    
    int size;
    cin >> size;

    int seq[size];

    for (int i = 0; i < size; ++i) {
        cin >> seq[i];
    }

    int loc_min = 0;
    for (int i = 1; i < (size - 1); ++i) {
        if (seq[i] < seq[i - 1] && seq[i] < seq[i + 1]) {
            loc_min = loc_min + 1;
        }
    }

    int loc_max = 0;
    for (int i = 1; i < (size - 1); ++i) {
        if (seq[i] > seq[i - 1] && seq[i] > seq[i + 1]) {
            loc_max= loc_max + 1;
        }
    }

    cout << "Local Minima: " << loc_min << endl;
    cout << "Local Maxima: " << loc_max << endl;
    
    return 0;
}
