// Maximum Digit Occurrence

#include <iostream>

using namespace std;


int main() {
    
    int N;
    int max = 1;
    int digit;
    int counter = 0;

    cin >> N;

    while (N > 0) {
        digit = N % 10;
        if (digit > max) {
            max = digit;
            counter = 1;
        }
        else if (digit == max) {
            counter ++;
        }
        N = N / 10;
    }

    cout << counter << endl;
    
    return 0;
}