// Digit Square Sum

#include <iostream>
#include <cmath>

using namespace std;


int main() {
   
    int num;

    cin >> num;

    int a = num % 10;
    int b = (num / 10) % 10;
    int c = (num / 100) % 10;
    int d = (num / 1000) % 10;
    int e = num / 10000;

    int res1 = pow(a, 2);
    int res2 = pow(b, 2);
    int res3 = pow(c, 2);
    int res4 = pow(d, 2);
    int res5 = pow(e, 2);

    cout << (res1 + res2 + res3 + res4 + res5) << endl;
    
    return 0;
}
