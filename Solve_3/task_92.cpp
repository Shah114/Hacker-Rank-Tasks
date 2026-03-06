// Replace Array Elements with Half the Sum of Neighbors

#include <iostream>

using namespace std;


int main() {
    
    int size;
    cin >> size;

    int seq[size];

    for (int i = 0; i < size; ++i) {
        cin >> seq[i];
    }
    
    float num[size];
    
    num[0] = seq[0];
    num[size - 1] = seq[size -1];
    
    for (int i = 1; i < size - 1; ++i) {
        num[i] = (float)(seq[i - 1] + seq[i + 1]) / 2;
        
    }
    
    for (int i = 0; i < size; ++i) {
        cout << num[i] << " ";
    }
    
    return 0;
}
