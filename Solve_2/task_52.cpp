// Maximum Digit Finder

#include <iostream>

using namespace std;


int main() {
    
    int N;
    int max = 0;
    int digit;

    cin >> N;

    while (N > 0) {
        digit = N % 10;
        if (digit > max) {
            max = digit;
        }
        N = N / 10;
    }

    cout << max << endl;
    
    return 0;
}