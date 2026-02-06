// Power of Two Check

#include <cmath>
#include <iostream>

using namespace std;


int main() {
    
    int N;

    cin >> N;

    while (N % 2 == 0) {
        N = N / 2;
    }

    if (N == 1) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    
    return 0;
}
