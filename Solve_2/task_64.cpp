// Prime Divisors Decomposition

#include <cmath>
#include <iostream>

using namespace std;


int main() {
    
    int N;
    
    cin >> N;
    
    for (int i = 2; i <= N; i++) {
        int a = 0;
        while (N % i == 0) {
            a++;
            N = N / i;
        }
        if (a > 0) {
            cout << i << "^" << a << " ";
        }
    }
    
    return 0;
}
