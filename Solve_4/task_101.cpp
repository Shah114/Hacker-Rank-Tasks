// String Length using Pointer

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    char arr[100];
    
    char *ptr;
    
    cin.getline(arr, 100);
    
    ptr = arr;
    
    int length = 0;
    while (*ptr != '\0' ) {
        length++;
        ptr++;
    }
    
    cout << "Length of the string: " << length << endl; 
    
    return 0;
}
