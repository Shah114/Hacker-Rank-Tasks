// Even Numbers in Even Places Counter

#include <iostream>

using namespace std;


int main() {
   
    int size;
    cin >> size;

    int seq [size];

    for (int i = 0; i < size; ++i) {
        cin >> seq[i];
    }

    int counter = 0;

    for (int i = 0; i < size; ++i) {
        if (seq[i] % 2 == 0 && i % 2 == 0) {
            counter++;
        }
    }

    cout << counter << endl;
    
    return 0;
}
