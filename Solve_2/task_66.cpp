// Twin Prime Numbers

#include <cmath>
#include <iostream>

using namespace std;


int main() {
    
    int N; 

    cin >> N;

    for (int i = 2; i <= N - 2; i++) {
        bool prime_1 = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                prime_1 = false;
                break;
            }
        }

        bool prime_2 = true;
        for(int j = 2; j < i + 2; j++) {
            if ((i + 2) % j == 0) {
                prime_2 = false;
                break;
            }
        }

        if (prime_1 && prime_2) {
            cout << "(" << i << ", " << i + 2 << ")" << endl;
        }
    }
}
