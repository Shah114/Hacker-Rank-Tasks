// Prime Numbers Between N1 and N2

#include <cmath>
#include <iostream>

using namespace std;


int main() {
   
    int N1;
    int N2;

    cin >> N1 >> N2;

    for (int i = N1; i <= N2; i++) {
        bool prime_num = true;
        if (i < 2) {
            prime_num = false;
        }

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                prime_num = false;
                break;
            }
        }

        if (prime_num) {
            cout << i << " ";
        }

    }

    cout << endl;
    
    return 0;
}
