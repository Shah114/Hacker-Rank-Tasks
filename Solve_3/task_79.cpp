// Count Distinct Elements in Non-decreasing Sequence

#include <iostream>

using namespace std;


int main() {
    
    int size;
    cin >> size;

    int seq[size];

    for (int i = 0; i < size; ++i) {
        cin >> seq[i];
    }

    int distinct = 1;

    for (int i = 0; i < size - 1; ++i) {
        if (seq[i] != seq[i + 1]) {
            distinct++;
        }
    }

    cout << "Distinct Elements: " << distinct << endl;
    
    return 0;
}
