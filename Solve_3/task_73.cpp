// Last Occurrence Index Finder

#include <iostream>

using namespace std;


int main() {
    
    int size;
    cin >> size;

    int seq [size];

    for (int i = 0; i < size; ++i) {
        cin >> seq[i];
    }

    int num;
    cin >> num;

    int index = -1;


    for (int i = 0; i < size; ++i) {
        if (seq[i] == num) {
            index = i;
        }
    }

    if (index != -1) {
        cout << "Last Occurrence Index: " << index << endl;
    }
    else {
        cout << "Not Found" << endl;
    }
    
    return 0;
}
