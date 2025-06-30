// Palindrome Number Checker

#include <iostream>

using namespace std;


int main() {
    
    int N;
    int num = 0;
    int rev = 0;
    int a;

    cin >> N;

    num = N;

    while (N > 0) {
        a = N % 10;
        rev = (rev * 10) + a;
        N = N / 10;
    }

    if (num == rev) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    
    return 0;
}
