// Factorial Prime Divisors Expansion

#include <iostream>

using namespace std;


int main() {
    
    int N;

    cin >> N;

    int N_fac = 1;
    for(int i = 1; i <= N; i++) {
        N_fac = N_fac * i;
    }

    for (int j = 2; j <= N_fac; j++) {
        int a = 0;
        while (N_fac % j == 0) {
            a++;
            N_fac = N_fac / j;
        }
        if (a > 0) {
            cout << j << "^" << a << " ";
        }
    }
    
    return 0;
}
