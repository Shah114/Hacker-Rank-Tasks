// Sequence Order Checker

#include <iostream>

using namespace std;


int main() {
    
    int size;
    cin >> size;
    
    int seq[size];
    
    for (int i = 0; i < size; ++i) {
        cin >> seq[i];
    }
    
    int d = 0;
    int a = 0;
    
    for (int i = 1; i < size; ++i) {
        if (seq[i] < seq[i - 1]) {
            d++;
        }
        else if (seq[i] > seq[i - 1]) {
            a++;
        }
    }
    
    if (d == 0) {
        cout << "Ascending" << endl;
    } else if (a == 0) {
        cout << "Descending" << endl; 
    } else {
        cout << "Neither" << endl;
    }
    
    return 0;
}
