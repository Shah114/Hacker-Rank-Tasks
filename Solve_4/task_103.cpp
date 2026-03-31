// Reverse Array using Pointer

#include <iostream>

using namespace std;


int main() {
    
    int arr[5] = {10, 20, 30, 40, 50};

    int *ptr;
    ptr = arr + 4;
    
    for (int i = 0; i < 5; i++) {
        cout << *ptr << endl;
        ptr--;
    }
    
    cout << endl;
    
    return 0;
}
