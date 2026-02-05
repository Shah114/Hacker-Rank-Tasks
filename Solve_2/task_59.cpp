// Least Common Multiple of Integers from 1 to N

#include <cmath>
#include <iostream>

using namespace std;


int main() {

    int N;
    int lcm = 1;

    cin >> N;

    for (int i = 2; i <= N; ++i) {
        int oldLcm = lcm;
        for (int j = max(oldLcm, i); j > 1 ; j++) {
            if (j % oldLcm == 0 && j % i == 0) {
                lcm = j;
                break;
            }
        }
    }
    cout << lcm << endl;
    
    return 0;
}
