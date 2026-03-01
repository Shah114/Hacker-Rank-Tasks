// Count Distinct Elements in Unordered Sequence

#include <iostream>

using namespace std;


int main() {
    
    int size;
    cin >> size;

    int seq[size];

    for (int i = 0; i < size; ++i) {
        cin >> seq[i];
    }

    int distinct = 0;

    for (int i = 0; i < size; ++i) {
        bool isDublicate = false;

        for (int j = 0; j < i; ++j) {
            if (seq[i] == seq[j]) {
                isDublicate = true;
                break;
            }
        }

        if (isDublicate == false) {
            distinct++;
        }
    }

    cout << "Distinct Elements: " << distinct << endl;
    
    return 0;
}
