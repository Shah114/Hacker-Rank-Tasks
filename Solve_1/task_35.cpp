// Number Replacement

#include <iostream>

using namespace std;


int main() {
    
    float X;
    float Y;

    cin >> X >> Y;

    if (X <= Y) {
        X = 0;
        cout << X << " " << Y << endl;
    }
    else {
        cout << X << " " << Y << endl;
    }
    
    return 0;
}