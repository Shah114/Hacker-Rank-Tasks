// Maximum Length of Consecutive Zeros

#include <iostream>

using namespace std;


int main() {
    
    int size;
    cin >> size;
    
    int seq[size];
    
    for (int i = 0; i < size; ++i) {
        cin >> seq[i];
    }
    
    int maxZero = 0;
    int curZero = 0;
    
    for (int i = 0; i < size; ++i) {
        if (seq[i] == 0) {
            curZero++;
            if (curZero > maxZero) {
                maxZero = curZero;
            }
        }
        else {
            curZero = 0;
        }
    }
    
        cout << "Length of Maximum Consecutive Zeros: " << maxZero << endl;
    
    return 0;
}
