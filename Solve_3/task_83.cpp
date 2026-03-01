// Length of Largest Ascending Portion

#include <iostream>

using namespace std;


int main() {
    
    int size;
    cin >> size;
    
    int seq[size];
    
    for (int i = 0; i < size; ++i) {
        cin >> seq[i];
    }
    
    int maxLen = 0;
    int curLen = 0;
    
    for (int i = 1; i < size; ++i) {
        if (seq[i] > seq[i - 1]) {
            curLen++;
            if (curLen > maxLen) {
                maxLen = curLen;
            }
        } else {
            curLen = 0;
        }
    }
    
    cout << "Length of Largest Ascending Portion: " << maxLen << endl;
    
    return 0;
}
