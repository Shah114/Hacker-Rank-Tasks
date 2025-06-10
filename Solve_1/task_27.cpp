// Armstrong Number Check

#include <iostream>
#include <cmath>

using namespace std;


int main() {
    
    int num;

    cin >> num;

    int a = num % 10;
    int b = (num / 10) % 10;
    int c = (num / 100) % 10;
    int d = num / 1000;

    int N = pow(a, 4) + pow(b, 4) + pow(c, 4) + pow(d, 4);

    if (num == N) {
        cout << "Armstrong Number" << endl;
    }
    else {
        cout << "Not Armstrong Number" << endl;
    }
    
    return 0;
}