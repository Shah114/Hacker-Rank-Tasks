// Array Sum using Pointers

#include <iostream>

using namespace std;


int main() {
    
    int length;
    cin >> length;
    
    int arr[length];
    int *ptr = arr;
    
    for (int i = 0; i < length; ++i) {
        cin >> *(ptr + i);
    }
    
    int sum = 0;
    
    for (int i = 0; i < length; ++i) {
        sum = sum + *(ptr + i);
    }
    
    cout << "Sum of array elements: " << sum << endl;
    
    
    return 0;
}
