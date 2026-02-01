// Sum of Squares Representation

#include <cmath>
#include <iostream>
using namespace std;


int main() {
    
    int num;
    
    cin >> num;
    
    for (int a = 1; a <= num/2; a++) {
        for (int b = 1; b <= num/2; b++) {
            if ((pow(a, 2) + pow(b, 2)) == num) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    
    cout << "NO" << endl;
    
    return 0;
}
