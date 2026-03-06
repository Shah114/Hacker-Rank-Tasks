//  Sort Array in Ascending Order

#include <iostream>

using namespace std;


int main() {
    
    int size;
    cin >> size;

    int seq[size];

    for (int i = 0; i < size; ++i) {
        cin >> seq[i];
    }
    
    int a;

    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if (seq[j] > seq[j + 1]) {
                a = seq[j];
                seq[j] = seq[j + 1];
                seq[j + 1] = a;
            }
        }
    }
    
    for (int i = 0; i < size; ++i) {
        cout << seq[i] << " ";
    }
       
    return 0;
}
