//  Count Occurrences of Subsequence

#include <iostream>

using namespace std;


int main() {
    
    int size;
    cin >> size;
    
    int seq[size];
    
    for (int i = 0; i < size; ++i) {
        cin >> seq[i];
    }
    
    int counter = 0;
    int value = 0;

    for (int i = 0; i < size; ++i) {
        if (value + 1 == seq[i]) {
            value++;
            
        }
        else {
            value = 0;
        }
        
        if (value == 10) {
            counter++;
            value = 0;
        }
    }       

    cout << "Occurrences of Subsequence: " << counter << endl;
    
    return 0;
}
