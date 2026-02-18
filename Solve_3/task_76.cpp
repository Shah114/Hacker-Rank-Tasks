// First and Last Maximum Elements Finder

#include <iostream>

using namespace std;


int main() {
    
    int size;
    cin >> size;

    int seq [size];

    for (int i = 0; i < size; ++i) {
        cin >> seq [i];
    }

    int max = seq[0];
    int count = 0;
    int pos_first = 0;
    int pos_last = 0;
    
    for (int i = 0; i < size; ++i) {
        if (seq[i] > max) {
            max = seq[i];
            count = 1;
            pos_first = pos_last = i;
        }
        else if (seq[i] == max) {
            count++;
            pos_last = i;
        }
    }

    cout << "The maximum element is: " << max << endl;
    cout << "The number of occurrences of the maximum element is: " << count << endl;
    cout << "The position of the first maximum element is: " << pos_first << endl;
    cout << "The position of the last maximum element is: " << pos_last << endl;
    
    return 0;
}
