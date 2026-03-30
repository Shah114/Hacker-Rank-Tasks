// Addition using Pointers

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int num1, num2;
    cin >> num1 >> num2;

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    int sum = 0;
    sum = *ptr1 + *ptr2;

    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    
    return 0;
}
